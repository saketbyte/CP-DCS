#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

struct Node *root = NULL;


void treeCreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;

    create(&q, 100);

    printf("Enter Root Value.");
    scanf("%d", &x);

    root = (struct Node*)malloc(sizeof(struct Node));

    root->data = x;
    root->lchild = root->rchild = NULL;

    enqueue(&q, root);

    while(!isEmpty(q))
    {
        p = dequeue(&q);

        printf("Enter left child of %d ", p->data);
        scanf("%d", &x);

        if(x!=-1)
        {
            t = (struct Node*)malloc(sizeof(struct Node));

            t->data = x;
            t->lchild = t->rchild = NULL;

            p->lchild = t;

            enqueue(&q, t);

        }

        printf("Enter right child of %d ",p->data);
        scanf("%d", &x);

        if(x!=-1)
        {
            t = (struct Node*)malloc(sizeof(struct Node));

            t->data = x;
            t->lchild = t->rchild = NULL;

            p->rchild = t;

            enqueue(&q, t);

        }

    }

}


void preorder(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

int main()
{
    treeCreate();

    preorder(root);
}