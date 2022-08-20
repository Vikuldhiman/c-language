#include<stdio.h>
#include<conio.h>
  int main()
  {
     int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after reversing");
      printf("the first number is %d",a);
      printf("the second number is %d",b);
    getch();
    retrun 0;
  }
