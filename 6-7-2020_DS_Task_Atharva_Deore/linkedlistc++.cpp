#include<bits/stdc++.h>
using namespace std;
class node
{public:
    int data;
    node *next;
    node()
    {
        next=NULL;
    }
};
class linked_list
{
    private:
    node *head,*tail,*tmp;
    public:
    linked_list()
    {
        head=NULL;
        tail=NULL;
    }
    void newnode(int n)
    {
        node *temp=new node();
        temp->data=n;
        temp->next=NULL;
        if(head==NULL)
        {head=temp;
        tail=temp;
        }
        else
        {tail->next=temp;
        tail=tail->next;
        }
    }
    void printlist()
    {   tmp=head;
        cout<<"\nstart";
        while(tmp->next!=NULL)
        {
            cout<<"->"<<tmp->data;
            tmp=tmp->next;
        }
        cout<<"->"<<tmp->data<<"->end";
    }
    void first(int n)
    {
        tmp=new node();
        tmp->data=n;
        tmp->next=head;
        head=tmp;
    }
    void last(int n)
    {
        tmp=new node();
        tmp->data=n;
        tmp->next=NULL;
        tail->next=tmp;
        tail=tail->next;
    }
    node* getHead()
    {
        return head;
    }
    void del(node *previous)
    {   tmp=previous->next;
        previous->next=tmp->next;
        delete tmp;
    }
};
int main()
{
    linked_list l1;
    l1.newnode(1);
    l1.newnode(2);
    l1.newnode(3);
    l1.newnode(4);
    l1.printlist();
    l1.first(0);
    l1.last(5);
    l1.printlist();
    l1.del(l1.getHead()->next->next);//deleting 3.we can write while also to traverse but list is small so i have done like this.
    l1.printlist();
}