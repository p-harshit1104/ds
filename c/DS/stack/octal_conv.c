//Program for Decimal to Octal Conversion
#include<stdio.h>

int top=-1, stack[50], item;

void push(int item){
    if(top==50){
        printf("overflow\n");
    }
    else{
        top++;
        stack[top]=item;
        
    }
}
void display(){
    int i;
    printf("octal conversion -\n");
    for(i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
void main(){
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    while(number!=0){
        item=number%8;
        number/=8;
        push(item);

    }
    display();
}