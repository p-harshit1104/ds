//Program for Decimal to Hexadecimal Conversion
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
    printf("Hexadecimal conversion -\n");
    for(i=top;i>=0;i--){
        printf("%c ",stack[i]);
    }
}
void main(){
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    while(number!=0){
        item=number%16;
        if(item<10){
            push(item+48);
        }
        else{
            push(item+55);
        }
        number/=16;
        
    }
    display();
}