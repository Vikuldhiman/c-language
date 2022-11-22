#include<stdio.h>
#include<conio.h>
float main()
{
  float num1,num2,add,mul,per;
  printf("enter two float values");
  scanf("%f %f",&num1,&num2);
  add=num1+num2;
  mul=num1*num2;
  per=num1%num2;
  printf("1. ADDITION = %f\n 2. MULTIPLICATION = %f\n 3. PERCENTAGE = %f ",add,mul,per);
  getch();
}
