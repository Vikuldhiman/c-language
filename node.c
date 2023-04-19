#include<stdio.h>
#include<stdlib.h>
typedef struct nodeType
{
    int info;
    struct nodeType *next;
}node;
void traversal(node* ptr)
{
    while(ptr!=NULL)
    {
    printf("%d",ptr->info);
    ptr=ptr->next;
    }
}
void main()
{
    node *head;
    node* first;
    node* second;
    node* third;
    node* fourth;
    first=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));
    fourth=(node*)malloc(sizeof(node));
    first->info=4;
    first->next=second;
    second->info=6;
    second->next=third; 
    third->info=3;
    third->next=fourth;
    fourth->info=9;
    fourth->next=NULL;
    head=first;
    traversal(head);
}
