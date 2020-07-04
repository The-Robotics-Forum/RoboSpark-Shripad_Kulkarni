#include<iostream>
using namespace std;
class Student
{public:
    string name;
    int year;
    void getinput()
    {
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter Year :";
        cin>>year;
    }
};
void showRank(int r)
{   cout<<"\nOutput :"<<endl;
    cout<<"Rank :"<<r;
}
void showRank(Student *s)
{   cout<<"\nOutput :"<<endl;
    cout<<"Name :"<<s->name<<endl;
    cout<<"Year :"<<s->year<<endl;
    cout<<"Rank : No Rank"<<endl;
}
void showRank(Student *s,int r)
{   cout<<"\nOutput :"<<endl;
    cout<<"Name :"<<s->name<<endl;
    cout<<"Year :"<<s->year<<endl;
    cout<<"Rank : "<<r<<endl;
}
int main()
{   int n,rank;
    Student *s1=new Student();
    s1->getinput();
    cout << "Enter :->\n(1) For printing only rank. \n(2) For printing student details. \n(3) For printing both rank and student details \n" << endl;
    cin >> n ;
    switch (n)
    {
    case 1:
        cout<<"Enter rank :";
        cin>>rank;
        showRank(rank);//only integer as arguement
        break;
    case 2:
        showRank(s1);//only student as an argument
        break;
    case 3: 
        cout<<"Enter rank :";
        cin>>rank;
        showRank(s1,rank);//only student and rank
        break;
    default:
        cout << "Please Choose Correct Number to print Student Details.";
        break;
    }
}