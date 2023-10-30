#include<stdio.h>
int stack[100],top=-1;
int push(char a){
    top++;
    stack[top]=a;
}
int pop(){
    top--;
}
void check(){
    if(top==-1){
        printf("expression is valid\n");
    }
    else{
        printf("expression is not valid\n");
    }
}
int main(){
    int i;
    char a[100];
    printf("enter the expression:\n");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='('){
            push(a[i]);

        }
        else if(a[i]==')'){
            pop();
        }
        
    }
    
    check();
}