#include <stdio.h>

int main() {

    int C, A, B, vertex_1, vertex_2, graph_size, vertex_now;
    long int sum_of_edge_weight = 0, edge_weight, shortest_path;
    scanf("%d %d %d", & C, & A, & B);
    int visited[1001];
    long int adj_matrix[1001][1001] = {
        0
    };

    int max = -1;

    for (int i = 0; i < C; i++) {
        scanf("%d %ld %d", & vertex_1, & edge_weight, & vertex_2);
        adj_matrix[vertex_1 - 1][vertex_2 - 1] = edge_weight;
        adj_matrix[vertex_2 - 1][vertex_1 - 1] = edge_weight;
        sum_of_edge_weight += edge_weight;
        visited[vertex_1 - 1] = visited[vertex_2 - 1] = 0;
        if (max < vertex_1) max = vertex_1;
        if (max < vertex_2) max = vertex_2;
    }
    graph_size = max;
    long int distance[1001];

    for (int i = 0; i < graph_size; i++) {
        distance[i] = sum_of_edge_weight + 1;
    }

    distance[A - 1] = 0;
    for (int i = 0; i < graph_size; i++) {
        shortest_path = sum_of_edge_weight;
        for (int j = 0; j < graph_size; j++) {
            if (visited[j] == 0 && distance[j] < shortest_path) {
                shortest_path = distance[j];
                vertex_now = j;
            }
        }
        visited[vertex_now] = 1;

        for (int j = 0; j < graph_size; j++) {
            if (j == vertex_now) {
                continue;
            }
            if (adj_matrix[vertex_now][j] != 0 && distance[j] > distance[vertex_now] + adj_matrix[vertex_now][j]) {
                distance[j] = distance[vertex_now] + adj_matrix[vertex_now][j];
            }
        }
    }

    for (int i = 0; i < graph_size; i++) {}

    if (visited[B - 1] == 1) {
        printf("YES\n");
        printf("%ld", distance[B - 1]);
    } else {
        printf("NO\n");
    }

    return 0;
}
