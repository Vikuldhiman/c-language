// In this you can calculate with your choice
#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,c,x,n,y;
char p;
printf(" 1.ADDITION \n 2.SUBTRACTION \n 3.MULTIPLICATION \n 4.DIVISION \n");
printf("Enter your first value : ");
scanf("%d",&a);
printf("Enter your second value : ");
scanf("%d",&b);
printf("Enter your CHOICE : ");
scanf("%d",&c);
if(c==1)
{
x=a+b;
printf("The ADDITION of %d and %d is = %d",a,b,x);
}
else if(c==2)
{
x=a-b;
printf("The SUBTRACTION of %d and %d is = %d",a,b,x);
}
else if(c==3)
{
x=a*b;
printf("The MULTIPLICATION of %d and %d is = %d",a,b,x);
}
else if(c==4)
{
x=a/b;
printf("The DIVISION of %d and %d is = %d",a,b,x);
}
  
else
{
printf("\n YOU ENTER THE WRONG CHOICE \n");
printf("\t TRY AGAIN");
}
getch();
}
