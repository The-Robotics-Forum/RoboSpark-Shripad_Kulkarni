#include<stdio.h>

struct Student{
    int id;
    char name[20];
    int yr;
    float cgpa;
}stud[4];

void enter_details(){
    for(int i=0;i<4;i++){
        printf("\nEnter details of Student %d",i+1);
        printf("\n
        Enter Student id ");
        scanf("%d",&stud[i].id);
        printf("Enter Student name ");
        scanf("%s",&stud[i].name);
        printf("Enter Student year ");
        scanf("%d",&stud[i].yr);
        printf("Enter Student cgpa ");
        scanf("%f",&stud[i].cgpa);
    }
}

void show_details(struct Student s){
    printf("\nID : %d\nName : %s\nYear : %d\nCGPA : %f",s.id,s.name,s.yr,s.cgpa);
}

int main(){
    enter_details();
    printf("\nStored details are ");
    for(int i=0;i<4;i++){
        show_details(stud[i]);
    }
}