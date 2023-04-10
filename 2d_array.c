#include<stdio.h>
void addition_array(int arr[3][3], int ar[3][3])
{
    int sum[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=arr[i][j]+ar[i][j];
        }
    }
    printf("Sum of matrixes: \n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
void multiplication_array(int arr[3][3],int ar[3][3])
{
    int mul[3][3],i,j,k;
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mul[i][j]=0;
            for(k=0;k<3;k++)
            {
                mul[i][j]=arr[i][k]*ar[k][j];
            }
        }
    }
    printf("Multiplication of 2d array\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n"); 
    }
}
 void main(){
    int array_1[3][3],array_2[3][3],i,j;
    printf("Enter your first array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array_1[i][j]);
        }
    }
    printf("enter your second array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array_2[i][j]);
        }
    }
    addition_array(array_1,array_2);
    multiplication_array(array_1,array_2);
 }