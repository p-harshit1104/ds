//Program for Stack Primitive Operations
#include<stdio.h>
#define n 4
int top=-1,k;
int arr[n];
void push();
void pop();
void show();
char ans;
void main(){
    int choice;
    printf("***********************stack operation***********************\n");
    printf("\nPerform operations on the stack:");  
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n");  
       
        do{
             printf("\n\nEnter the choice: ");  
        scanf("%d", &choice);
            
            
            switch(choice){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            show();
            break;

        }
        printf("do you want to repeat this\n");
            scanf(" %c",&ans);
        
        }while(ans=='y');
}
// push operation
void push(){
    if (top>n-1){
        printf("overflow");
    }
    else{
        printf("enter value to be push\n");
        scanf("%d",&k);
        top=top+1;
        arr[top]=k;

    }
}
//pop operation
void pop(){
    if(top==-1)
    printf("underflow");
    else{
        printf("popped element is %d\n",arr[top]);
        top=top-1;
    }
}
//display stack
void show(){
    int i;
     for (i=top;i >= 0; --i)  {
        printf("%d ",arr[i]);
        printf("\n");

    }
}


