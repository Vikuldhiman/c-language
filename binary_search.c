#include<stdio.h>
 void binary_search(int arr[],int size,int item)
 {
    int beg=0;
    int end=size-1;
    int mid=(beg+end)/2;
    while((beg<=end)&&(arr[mid]!=item))
    {
        if(item<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if(beg>end)
    {
         printf("element not found");
    }
    else{
       
        printf("\nelement found at %d location",mid+1);
    }
 }
 void main()
 {
    int size,i,j,item,temp;
    printf("enter the array size\n");
    scanf("%d",&size);
    int array[size];
    printf("enter your %d elements",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
   
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
     printf("enter your searching element\n");
    scanf("%d",&item);
    for(i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    binary_search(array,size,item);
 }