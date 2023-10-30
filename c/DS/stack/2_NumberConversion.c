//Program for Decimal to Binary Conversion.
#include<stdio.h>
int top=-1, stack[50], item;

void push(int item)
{
    if(top > 50)
    {
        printf("Stack Overflow");
    }
    
    else
    {
        top = top+1;
        stack[top] = item;
    }
}

void display()
{
    if(top>=0)
    {
        printf("In Binary = ");
        for(int i=top; i>=0; i--)
        {
            printf("%d",stack[i]);
        }
    }
}

void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    while(num>0)
    {
        item = num%2;
        num = num/2;
        push(item);
    }

    display();
}


