#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();  
struct node   
{  
int data;  
struct node *next;  
};  
struct node *top;  
  
void main ()  
{  
    int choice=0;     
      
    while(choice != 4)  
    {  
        
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice: \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
}  
}  
void push ()  
{  
    int val;  
    struct node *newnode = (struct node*)malloc(sizeof(struct node));   
    if(newnode == NULL)  
    {  
        printf("not able to push the element");   
    }  
    else   
    {  
        printf("Enter the value:");  
        scanf("%d",&val);  
        if(top==NULL)  
        {         
            newnode->data = val;  
            newnode -> next = NULL;  
            top=newnode;  
        }   
        else   
        {  
            newnode->data= val;  
            newnode->next = top;  
            top=newnode;  
        }   
               
        
        printf("Item pushed:%d",val);  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *newnode;  
    if (top == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = top->data;  
        newnode = top;  
        top = top->next;  
        free(newnode);  
        printf("Item popped:%d",item);  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *newnode;  
    newnode=top;  
    if(newnode == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("The elements are:\n");  
        while(newnode!=NULL)  
        {  
            printf("%d\n",newnode->data);  
            newnode = newnode->next;  
        }  
    }  
}  
