#include<stdio.h>
#include<stdlib.h>
#define empty_stack (-1)
int main()
{   
    int n,i,flag,top=-1;
    printf("Enter the size of input :");
    scanf("%d",&n);
    char *strinput=(char *)malloc(n*sizeof(char));
    printf("Enter the brackets :");
    scanf("%s",strinput);
    char *Stack=(char *)malloc(n*sizeof(char));
    flag=1;
    for(i=0;i<n;i++)
    {   
        if(strinput[i]=='(')
        Stack[++top]=strinput[i];
        if(strinput[i]==')')
        {if(top>=0)
         top-=1;
         else
            {
                flag=0;
                break;
            } 
        }
    }
    if(flag==1 && top==empty_stack)
    printf("Balanced");
    else
    printf("Unbalanced");
}
    