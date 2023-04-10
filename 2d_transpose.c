#include<stdio.h>
void transpose_array(int array[3][3])
{
    int i,j;
    printf("Before Transpose\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array[j][i]);
        }
        printf("\n");
    }
}
void main()
{
    int i,j,trans[3][3];
    printf("enter your 3*3 elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&trans[i][j]);
        }
    }
    transpose_array(trans);
}