#include<stdio.h>
#include<stdlib.h>
#define max 100
int queue[max];
int front=-1;
int rear=-1;
void enqueue()
{
    int item;
    printf("ENTER YOUR ELEMENT\n");
    scanf("%d",&item);
    printf("<><><><><><><><><><><><><><><><>\n");
    if(rear==max-1)
    {
         printf("QUEUE IS FULL\n");
         printf("<><><><><><><><><><><><><><><><>\n");
    }
    else
    {
    if((front==-1)&&(rear==-1))
    {
       rear=0;
       front=0;
       queue[rear]=item;
       printf("ELEMENT IS INSERTED\n");
       printf("<><><><><><><><><><><><><><><><>\n");
    }
    else
    {
        rear++;
        queue[rear]=item;
        printf("ELEMENT IS INSERTED\n");
        printf("<><><><><><><><><><><><><><><><>\n");
    }
    }
}
void dequeue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("QUEUE IS EMPTY\n");
        printf("<><><><><><><><><><><><><><><><>\n");
    }
    else
    {
        if(front==rear)
        {
            front=0;
            rear=0;
            printf("LAST ELEMENT IS DELETED\n");
            printf("<><><><><><><><><><><><><><><><>\n");
        }
        else
        {
            front++;
            printf("ELEMENT IS DELETED\n");
            printf("<><><><><><><><><><><><><><><><>\n");
        }
    }
}
void display()
{
    if(front==rear==-1)
    {
        printf("QUEUE IS EMPTY\n");
        printf("<><><><><><><><><><><><><><><><>\n");
    }
    while(front!=rear)
    {
        printf("%d\t",queue[front]);
        front++;
    }
    printf("\n");
}
void main()
{
    int ch;
    while(1)
    {
        printf("<><><><><><><><><><><><><><><><>\n");
        printf("1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        printf("<><><><><><><><><><><><><><><><>\n");
        switch(ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default :
            printf("enter valid choice\n");
            printf("<><><><><><><><><><><><><><><><>\n");
        }
    }
}