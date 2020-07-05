#include<iostream>
#include<string.h>
using namespace std;
 class Student{
     public:
     int roll;
     string name;
     float cgpa;
     int yr;
     float *marks = new float[5];

    Student(){
        roll = 1;
        name = "Rohit";
        yr = 18;
    }
    int calcCGPA(){
        float sum=0;
        for(int i=0;i<5;i++)
            sum+=marks[i];
        cgpa = (sum/500)*10;
        delete[] marks;
    }

    void getData(){
        cout<<"Enter details of student\nEnter roll no ";
        cin>>roll;
        cout<<"Enter name ";
        cin>>name;
        cout<<"Enter year ";
        cin>>yr;
        for(int i=0;i<5;i++){
            cout<<"Enter marks of sub "<<i+1;
            cin>>marks[i];
        }
    }
    void showData(){
        calcCGPA();
        cout<<"\nDetails are:\nRoll no :"<<roll<<"\nName :"<<name<<"\nYear :"<<yr<<"\nCGPA :"<<cgpa;
    }
 };

 int main(){
     Student s;
     s.getData();
     s.showData();
 }