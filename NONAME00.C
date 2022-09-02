#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int n,rem,sum=0;
printf("enter four digit number");
scanf("%d"&n);
while(n>0)
{
 rem=n%10;
if(rem%2==0)
{
 sum=sum+rem;
}
 n=n/10;
}
printf("sum= %d",sum);
getch();
return 0;
}