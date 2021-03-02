#include<bits/stdc++.h>

using namespace std;

int adj_mat[100][100] ={{0}};


void addEdge(int a, int b, int w)
{
    adj_mat[a][b]=w;
    adj_mat[a][b]=w;
}

void display(int v)
{
    for(int i =0;i<v;i++) {
        for (int j = 0; j < v; j++)
            cout << adj_mat[i][j] << " ";
        cout<<endl;
    }

}


int main()
{
    int v =10;

    addEdge(1,2,3);
    addEdge(2,4,6);
    addEdge(3,6,9);
    addEdge(4,8,12);
    addEdge(5,9,15);
    addEdge(4,9,3);
    addEdge(3,8,6);
    addEdge(2,6,9);
    addEdge(1,4,12);
    addEdge(0,2,15);
    display(v);

}