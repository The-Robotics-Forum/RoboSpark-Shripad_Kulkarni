#include<bits/stdc++.h>
using namespace std;
class node
{public:
    int data;
    static int count;
    node *next;
    node()
    {
        next=NULL;
        count++;
    }
};
int node::count=0;
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
    {   if(node::count==0)
        {
            cout<<"Empty List"<<endl;
            return;
        }
        tmp=head;
        cout<<"\nstart";
        while(tmp->next!=NULL)
        {
            cout<<"->"<<tmp->data;
            tmp=tmp->next;
        }
        cout<<"->"<<tmp->data<<"->end\n";
    }
    void insert(int data,int pos)
    {int i=0;
        if(pos>node::count)
        {
            cout<<"Cannnot Insert."<<endl;
            return;
        }
        if(pos==0)
        {
            tmp=new node();
            tmp->data=data;
            tmp->next=head;
            head=tmp;
        }
        else if(pos==node::count)
        {
            tmp=new node();
            tmp->data=data;
            tmp->next=NULL;
            tail->next=tmp;
            tail=tail->next;
        }
        else
        {   node *tmp1=NULL;
            node *temp=new node();
            temp->data=data;
            tmp=head;
            while(i<pos-1)
            {
                tmp=tmp->next;
                i++;
            }
            tmp1=tmp->next;
            temp->next=tmp1;
            tmp->next=temp;
        }
    }
    node* getHead()
    {
        return head;
    }
    void del(int pos)
    {   int i=0;
        if(pos>node::count)
        {
            cout<<"Cannot Delete";
            return;
        }
        else if(pos==0)
        {
            tmp=head;
            head=head->next;
            tmp->next=NULL;
            delete tmp;
            node::count--;
        }
        else if(pos==node::count)
        {
            tmp=head;
            while(i<pos-1)
            {
                tmp=tmp->next;
                i++;
            }
            node *temp=tmp->next;
            tmp->next=NULL;
            delete temp;
            node::count--;
        }
        else
        {
            tmp=head;
            while(i<pos-1)
            {
                tmp=tmp->next;
                i++;
            }
            node *temp=tmp->next;
            tmp->next=tmp->next->next;
            delete temp;
            node::count--;
        }
    }
};
int main()
{   int n,data,pos;
    char repeat='y';
    linked_list l1;
    while(repeat=='y')
    {
    cout<<"Enter 1 to create node\nEnter 2 to insert a node\nEnter 3 to delete element\nEnter 4 to print."<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        /* code */
        cout<<"Enter Data Member:";
        cin>>data;
        l1.newnode(data);
        break;
    case 2:
        cout<<"Enter data and position:";
        cin>>data>>pos;
        l1.insert(data,pos);
        break;
    case 3:
        cout<<"Enter the position of element you want to delete:";
        cin>>pos;
        l1.del(pos);
        break;
    case 4:
        l1.printlist();
        break;
    default:
        cout<<"Enter correct number";
    }
    cout<<"Enter 'y' to continue"<<endl;
    cin>>repeat;
    }
}
