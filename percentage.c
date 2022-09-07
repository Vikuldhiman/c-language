#include<stdio.h>
#include<conio.h>
int main()
{
  clrscr();
  int a,p;
  printf("enter the total of five sbject marks : ");
  scanf("%d",&a);
  p=a%5*100;
  printf("the percentage of five subject marks is = %d ",p);
  getch();
}
