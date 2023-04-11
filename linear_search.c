#include<stdio.h>

void linear_search(int ar[],int size,int item)
{
    for(int i=0;i<size;i++)
    {
        if(ar[i]==item)
        {
            printf("element found at %d location\n",i+1);
        }
    }
}
void main()
{
 int  size,ele;
printf("enter the size of array\n");
scanf("%d",&size);
int arr[size];
 printf("enter the ekements in array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the searching element");
    scanf("%d",&ele);
    linear_search(arr,size,ele);
}