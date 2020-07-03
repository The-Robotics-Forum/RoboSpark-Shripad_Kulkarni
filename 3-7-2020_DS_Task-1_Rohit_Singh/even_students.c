#include<stdio.h>
#include<stdlib.h>
struct stud{
    int roll,front,rear;
    char name[20];char arr[10][20];
    
}stud;

void initialize(struct stud* q){
    q->front=0;
    q->rear=0;
}
void enqueue(struct stud* q,char *name,int roll){
    if(roll%2==0){
        q->arr[q->rear] = (char)*name;
        q->rear+=1;
    }
}
void dequeue(struct stud* q){
    q->front+=1;
    //return q->arr[q->front++];a
}
int isEmpty(struct stud* q){
    return q->front==q->rear;
}
void print(struct stud* q){
    if(isEmpty(q)){
        printf("Queue is empty");
        return;
    }
    printf("front");
    for(int i=q->front;i<=q->rear;i++){
        printf(" %d ",q->arr[i]);
    }
    printf("rear\n");
}
int main(){
    struct stud* q = (struct stud*)malloc(sizeof(struct stud));
    initialize(q);
    enqueue(q,"ritik",1);
    enqueue(q,"rohit",2);
    enqueue(q,"vedant",3);
    enqueue(q,"yash",4);
    enqueue(q,"aditya",5);
    enqueue(q,"shashank",6);
    enqueue(q,"vikram",7);
    print(q);
    dequeue(q);
    print(q);
    dequeue(q);
    print(q);
    enqueue(q,"dhiren",8);
    print(q);

}