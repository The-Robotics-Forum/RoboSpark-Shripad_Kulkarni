#include<stdio.h>
struct student
{
    /* data */
    int stud_id;
    char stud_name[50];
    int stud_year;
    float stud_cgpa;
};
struct student s[4];
void info(struct student s)
{
    /* data */
    printf("--------------------------\n|* Name : %s\n|* ID : %d\n|* Year : %d\n|* CGPA : %f\n--------------------------\n",s.stud_name,s.stud_id,s.stud_year,s.stud_cgpa);
};

int main()
{
    int i;
    printf(">Enter student details :\n");
    for(i=0;i<4;i++)
    {   
        printf("\n-Student %d",i+1);
        printf("\nEnter name: ");
        gets(s[i].stud_name);
        printf("Enter id :");
        scanf("%d",&s[i].stud_id);
        printf("Enter year :");
        scanf("%d",&s[i].stud_year);
        printf("Enter CGPA :");
        scanf("%f",&s[i].stud_cgpa);
        fflush(stdin);
    }
    printf("\n\n***Student Details***\n\n");
    for(i=0;i<4;i++)
    {
        info(s[i]);
    }
}