#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char str[]="vikhul";
  char stre[]="vikul";
  int value = strcmp(str,stre);
  printf("%d",value);
  getch();
}

