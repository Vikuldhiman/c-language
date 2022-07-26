#include<stdio.h>
#include<conio.h>
int main()
{
short a;
long b;
long long c;
long double d;
printf("side of short = %d byte\n",sizeof(a));
printf("size of long = %d bytes \n",sizeof(b));
printf("size of long long = %d bytes \n",sizeof(c));
printf("size of long double = %d byte",sizeof(d));
getch();
return 0;
}