#include<stdio.h>
#include<string.h>
char stack[20];
int top=-1;
void pop(){
    top-=1;
}
void push(char element){
    stack[++top] = element;
}
int topElement(){
    return stack[top];
}
int isEmpty(){
    return top==-1;
}
int main(){
    char list[20], tmp;
    printf("Enter series of brackets ");
    scanf("%s",&list);
    for(int i=0;i<(int)strlen(list);i++){
        if(list[i]=='(' || list[i]=='{' || list[i]=='['){
            push(list[i]);
        }
        else{
            tmp = topElement();
            if(tmp=='(' && list[i]==')' || tmp=='{' && list[i]=='}' || tmp=='[' && list[i]==']'){
            if(isEmpty()){
                printf("\nBrackets are unbalanced at position %d",i+1);
            }else pop();
            }else printf("\nBrackets are unbalanced at position %d",i+1);
        }
        if(i==((int)strlen(list)-1) && isEmpty()){
            printf("Brackets are balanced");
            }
        else {
            printf("Brackets are unbalanced. More closing brackets required");
            break;
        }
    }
}