#include<stdio.h>
#include<stdlib.h>
typedef struct nodeType
{
    int info;
    struct nodeType *next;
}node;
//insert at end of linked list
void insert_element(node** front,node** rear,int item)
{
    node* ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("\n*************************\n");
    ptr->info=item;
    if((*front==NULL)&&(*rear==NULL))
    {
       *front=ptr;
       *rear=ptr;
       ptr->next=NULL;
    }
    else
    {
        node* temp;
        temp= *rear;
        temp->next=ptr;
        ptr->next=NULL;
        *rear=ptr;
    }
    printf("%d Element inserted\n",item);
    printf("\n*************************\n");
}
void delete_element(node** front,node** rear)
{
    node* temp;
    int t;
    if((*front==NULL)&&(*rear==NULL))
    {
        printf("QUEUE IS EMPTY\n");
        printf("\n*************************\n");
    }
    else
    {
        temp= *front;
        *front=temp->next;
        t=temp->info;
    }
    printf("%d Element deleted\n",t);
    printf("\n*************************\n");
}
void main()
{
    node* front=NULL;
    node* rear=NULL;
 int choice,item;
 while(1)
 {
    printf("1. INSERT ELEMENT\n2. DELETE ELEMENT\n3. EXIT");
    printf("\n*************************\n");
    printf("Enter choice\n");
    scanf("%d",&choice);
    printf("*************************\n");
 switch(choice)
 {
    case 1:
    printf("Enter your element\n");
    scanf("%d",&item);
    insert_element(&front,&rear,item);
    break;
    case 2:
    delete_element(&front,&rear);
    break;
    case 3:
    exit(1);
    break;
    default:
    printf("Enter valid choice\n");
    printf("\n");
 }  
 } 
}