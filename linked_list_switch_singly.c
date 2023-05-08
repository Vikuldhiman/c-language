#include<stdio.h>
#include<stdlib.h>
typedef struct nodeType{
    int info;
    struct nodeType *next;
}node;
node *head =NULL;
void insert()
{
    int first;
    printf("Enter your first element in Linked List : ");
    scanf("%d",&first);
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        ptr->next=NULL;
    }
    else
    {
        ptr->next=head;
    }
    head=ptr;
    ptr->info=first;
    printf("Element inserted succesfully\n");
    // printf("----------------------------------------------------------------------------------------------\n");
}
void insert_at_begning()
{
    int element;
    node *ptr;
    printf("Enter your element : ");
    scanf("%d",&element);
    ptr=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        ptr->next=NULL;
    }
    else
    {
        ptr->next=head;
    }
    head=ptr;
    ptr->info=element;
    printf("Element inserted succesfully\n");
    printf("----------------------------------------------------------------------------------------------\n");
}
void insert_at_end()
{
    int element;
    node *ptr,*temp;
    printf("Enter your element : ");
    scanf("%d",&element);
    ptr=(node*)malloc(sizeof(node));
    if(head==NULL)
    { 
        head=ptr;
        free(ptr);
    }
    else
    {
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=NULL;
    ptr->info=element;
    }
     printf("Element inserted succesfully\n");
}
void insert_aftr_spcfic()
{
     int element,em,t;
    node *ptr;
    node *temp;
    printf("Enter your element : ");
    scanf("%d",&element);
    ptr=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        ptr->next=NULL;
        head=ptr;
        ptr->info=element;
    }
    else
    {
        temp=head;
        printf("Enter element after which you want to insert\n");
        scanf("%d",&em);
        while(temp->info!=em)
        {
        if(temp->info==em)
        {
            t=temp->next;
            temp->next=ptr;
            ptr->next=t;
            ptr->info=element; 
        }
        else 
        {
            temp=temp->next;
        }
        }
    }
    printf("Element inserted succesfully\n");
}
void deletion_from_begning()
{
    node *temp;
    if(head==NULL)
    {
        printf("OVERFLOW\n");
    }
    else
    {
    temp=head;
    head=temp->next;
    free(temp);
    printf("Element deleted successfully\n");
    }
}
void deletion_from_end()
{ 
    node *temp,*temp1;
    if(head==NULL)
    {
        printf("OVERFLOW\n");
    }
    //  else if(head->next==NULL)
    //     {
    //         head=NULL;
    //         free(head);
    //     }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp1=temp;
                temp=temp->next;
            }
            temp1->next=NULL;
            free(temp);
            printf("Element deleted successfully\n");
            // while(temp->next->next!=NULL)
            // {
            //     temp=temp->next;
            // }
            // temp->next=NULL;
        }
    }  
void traversing()
{
    node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
}
void searching()
{
    node *ptr;
    int item,i=0,flag;
    ptr=head;
    if(ptr==NULL)
    {
        printf("EMPTY");
    }
    else{
        printf("enter the searching element : ");
        scanf("%d",&item);
        while(ptr!=NULL)
        {
            if(ptr->info==item)
            {
                printf("Element found at %d location ",i+1);
                flag=0;
            }
            else{
                flag=1;
            }
            i++;
            ptr=ptr->next;
        }
        if(flag==1)
        {
            printf("element not found\n");
        }
    }

}
void main()
{    
    int choice;
     while(1)
    {
        printf("\n");
        printf("----------------------------------------------------------------------------------------------\n");
        printf("1. Create linked List\n");
        printf("2. Insert at Begning\n");
        printf("3. Insert at Ending\n");
        printf("4. Deletion from begning\n");
        printf("5. deletion from Ending\n");
        printf("6. Traversing\n");
        printf("7. Searching\n");
        printf("8. Insert after specific position\n");
        printf("9. Exit\n");
        printf("\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        printf("----------------------------------------------------------------------------------------------\n");

        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2: 
            insert_at_begning();
            break;
            case 3:
            insert_at_end();
            break;
            case 4:
            deletion_from_begning();
            break;
            case 5:
            deletion_from_end();
            break;
            case 6:
            traversing();
            break;
            case 7:
            searching();
            break;
            case 8:
            insert_aftr_spcfic();
            break;
            case 9:
            exit(1);
            default:
            printf("Enter the valid Choice\n");
            break;
        }
    }
    printf("\nThank You\n");
}