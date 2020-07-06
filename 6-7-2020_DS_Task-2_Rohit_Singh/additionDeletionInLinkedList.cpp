#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
void print(struct node *head){
    struct node* tmp =head;
    while(tmp->next!=NULL){
        cout<<tmp->data<<" -> ";
        tmp = tmp->next;
    }
    cout<<tmp->data<<" -> NULL\n";
}

void insert(struct node *prev, int data){
    struct node* new_node = new node();
    new_node->data = data;
    new_node->next = prev->next;
    prev->next = new_node;
}
struct node* insertStart(struct node *head, int data){
    struct node* new_node = new node();
    new_node->data = data;
    new_node->next = head;
    return new_node;
}
void del(struct node *prev){
    prev->next = prev->next->next;
    prev->next->next = NULL;
}
int main(){
    struct node* head = new node();
    head->data = 1;
    head->next = NULL;

    struct node* second = new node();
    second->data = 2;
    second->next = NULL;
    head->next = second;

    struct node* third = new node();
    third->data = 3;
    third->next = NULL;
    second->next = third;

    struct node* fourth = new node();
    fourth->data = 4;
    fourth->next = NULL;
    third->next = fourth;

    print(head);
    insert(fourth,5);
    print(head);
    head = insertStart(head,0);
    print(head);
    del(third);
    print(head);
    }