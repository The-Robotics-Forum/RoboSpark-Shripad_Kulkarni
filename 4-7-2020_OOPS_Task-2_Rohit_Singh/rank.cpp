#include<iostream>
#include<string.h>
using namespace std;
 class Student{
     public:
     int roll;
     string name;
     float cgpa;
     int yr;

    Student(){
        roll = 1;
        name = "Rohit";
        yr = 18;
        cgpa = 8.43;
    }
    void showData(){
        cout<<"\nDetails are:\nRoll no :"<<roll<<"\nName :"<<name<<"\nYear :"<<yr<<"\nCGPA :"<<cgpa;
    }
 };

 void func(int rank){
     cout<<"Rank is "<<rank<<endl;
 }
 void func(Student s){
     s.showData();
     cout<<"\nNo rank\n";
 }
 void func(Student s,int rank){
     s.showData();
     cout<<"\nRank is "<<rank<<endl;
 }
 int main(){
     Student s;
     func(2);
     func(s);
     func(s,1);
 }