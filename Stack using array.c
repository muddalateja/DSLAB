#include<stdio.h>
void main(){
int a[100],ch,n,i,top=-1;
do
{
    printf("\nStack operations:");
    printf("\n1.push\n2.pop\n3.display\n4.exit");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
switch(ch)
{
case 1: if(top==a[i])
            printf("Stack is full");
            else
            {
            printf("Enter element to push:");
            scanf("%d",&n);
            top++;
            a[top]=n;
             }
        break;
case 2: if(top==-1)
            printf("Stack is empty");
            else
            {
            n=a[top];
            printf("Delected element is %d",n);
            top--;
            }
        break;
case 3: if(top==-1)
            printf("Stack is empty");
            else
            for(i=top;i>=0;i--)
            printf("\n%d",a[i]);
            }
            }while(ch!=4);
            }
         
        
        
