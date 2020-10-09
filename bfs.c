#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXLIMIT 100

struct queue
{
	int front, rear;
	int data[MAXLIMIT];
};

void create(struct queue *q)
{
	q->front=-1;
	q->rear=-1;
}

bool isEmpty(struct queue *q)
{
	if (q->front==-1)
		return true;
	else
		return false;
}

void enqueue(struct queue *q,int d)
{
	if (isEmpty(q))
	{
		q->front++;
		q->rear++;
		q->data[q->rear]=d;
	}
	else
	{
		if (q->rear==MAXLIMIT-1)
			return;
		else
		{
			q->rear++;
			q->data[q->rear]=d;
		}
	}
}
int dequeue(struct queue *q)
{
	int temp = q->data[q->front];
	if(q->front==-1)
	return 0;
	if (q->front == q->rear)
	{
		q->front=q->rear=-1;
	}
	else
	{
		q->front++;
	}
	return temp;
}

void creategraph(int adjmat[][50])
{
	int i,x,y;
	while(1)
	{
		scanf("%d %d",&x,&y);
		if(x==-1 && y==-1)
			break;
		else
			adjmat[x][y]=1;
	}
}

void BFS(int adjmat[][50],int n,int svertex)
{
	int v,i,visited[50]={0};
	struct queue q;
	create(&q);
	
	enqueue(&q,svertex);
	visited[svertex]=1;
	
	while(!isEmpty(&q))
	{
		v=dequeue(&q);
		printf("%d ",v);
		for(i=1;i<=n;i++)
		if(adjmat[v][i]==1 && visited[i]==0)
		{
			enqueue(&q,i);
			visited[i]=1;
		}
	}
}

void main()
{
	int adjmat[50][50]={0};
	int n,svertex;
	printf("\nEnter the number of vertices in the graph\n");
	scanf("%d",&n);
	creategraph(adjmat);
	printf("Enter the starting vertex\n");
	scanf("%d",&svertex);
	BFS(adjmat,n,svertex);
}
