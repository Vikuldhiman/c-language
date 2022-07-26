/* size of data types */
#include<stdio.h>
#include<conio.h>
int main()
{
int x;
char y;  
short a;
long b;
long long c;
long double d;
printf("size of int = %d byte \n",sizeof(x));
printf("size of char = %d byte \n ",sizeof(y));
printf("side of short = %d byte\n",sizeof(a));
printf("size of long = %d bytes \n",sizeof(b));
printf("size of long long = %d bytes \n",sizeof(c));
printf("size of long double = %d byte",sizeof(d));
getch();
return 0;
}
