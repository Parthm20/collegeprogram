#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype{
    int data;
    struct nodetype *link;
    
}node;
node *top=0;
void push(int x)
{
    node *newnode;
    newnode=(node *)malloc(sizeof(node));
    newnode->data=x;
    top=newnode;
}
void pop()
{
    node *temp;
    temp=top;
    if(top==0)
    {
        printf("UNDERFLOW\n");
    }
    else 
    {
        printf("%d",top->data);
        top=top->link;
        free(temp);
        
    }
}
void peek()
{
    if(top==0)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("top element is %d \n",top->data);
    }
}
void display()
{
    node *temp;
    
    temp=top;
    if(top==0){
        printf("stack is empty\n");
    }
    else
    {
        while(temp!=0)
        {
         printf("%d \n",temp->data);
         temp=temp->link;
        }
    }
}
int main()
{
    int ch;
    
    while(ch!=0)
    {
        int x;
        printf("enter choice !\n1:PUSH\n2:POP\n3:PEEK\n4:DISPLAY\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push(x);
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            default:
            printf("invalid choice!!!") ;

        }
    }
}