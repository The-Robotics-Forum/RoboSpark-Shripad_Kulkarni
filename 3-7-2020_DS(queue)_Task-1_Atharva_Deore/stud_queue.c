#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct students
{
    /* data */
    char name[20];
    int roll;
}s[5];                     //for 10 students
struct queue
{
    /* data */
    int inqueue[20];
    int front,rear;
};
void initialize(struct queue *Q)
{
    Q->front=0;
    Q->rear=0;
}
void enqueue(struct queue *Q,struct students s)
{
    if(s.roll%2!=0)
    printf("Sorry! You are not allowed.\n");
    else
    {
        Q->inqueue[Q->rear++]=s.roll;
        printf("Successfully Added!\n");
    }
}
int isempty(struct queue *Q)
{
    if(Q->rear==Q->front)
    return(1);
    else
    return(0);
}
void see_queue(struct queue *Q)
{   
    int i;
    if(isempty(Q))
    printf("Queue is Empty!");
    else
    {
        printf("start ->");
        for(i=Q->front;i<Q->rear;i++)
        printf(" %d -> ",Q->inqueue[i]);
        printf("end.");
    }
}
void dequeue(struct queue *Q)
{
    Q->front+=1;
}
int main()
{
    int i,num;
    char new_stud;
    struct queue *Q=(struct queue *)malloc(sizeof(struct queue));
    initialize(Q);
    for(i=0;i<5;i++)
    {
        printf("Enter name :");
        scanf("%s",s[i].name);
        printf("Enter Roll.No :");
        scanf("%d",&s[i].roll);
        enqueue(Q,s[i]);
    }
    printf("\nOur Queue :\n");
    see_queue(Q);
    printf("\nAfter first dequeue :\n");
    dequeue(Q);
    see_queue(Q);
}