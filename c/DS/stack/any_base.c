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
void ocdisplay(){
    int i;
    printf("octal conversion -\n");
    for(i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
int octal(int num){
    
   
    while(num!=0){
        item=num%8;
        num/=8;
        push(item);

    }
    ocdisplay();
}
void bindisplay()
{
        printf("In Binary = ");
        for(int i=top; i>=0; i--)
        {
            printf("%d",stack[i]);
        }
}

int binary(int num){
while(num>0)
    {
        item = num%2;
        num = num/2;
        push(item);
    }

    bindisplay();
}
void hexdisplay(){
    int i;
    printf("Hexadecimal conversion -\n");
    for(i=top;i>=0;i--){
        printf("%c ",stack[i]);
    }
}
int hexa(int num){
    while(num!=0){
        item=num%16;
        if(item<10){
            push(item+48);
        }
        else{
            push(item+55);
        }
        num/=16;
        
    }
    hexdisplay();

}
void main(){
    int choice,num;
       char ans;
    do{
        printf("1.Decimal to Octal\n2.Decimal to binary\n3.Decimal to hexadecimal\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("enter number:\n");
    scanf("%d",&num);
    switch(choice){
        case(1):
        octal(num);
        break;
        case(2):
        binary(num);
        break;
        case(3):
        hexa(num);
        break;
        default:
        printf("error");
        break;
    }
 printf("\n");
    printf("do you want to repeat this\ny for yes,n for no: ");
            scanf(" %c",&ans);
    }while(ans=='y');
    
}