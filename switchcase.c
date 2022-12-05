#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  printf("enter a character \n O for orange \n B for black \n R for red \n Y for yellow \n");
  scanf("%c",&ch);
  switch(ch)
  {
    case 'O':
    case 'o':
      printf("Orange");
      break;
    case 'R':
    case 'r':
      printf("Red");
      break;
    case 'B':
    case 'b':
      printf("Black");
      break;
    case 'Y':
    case 'y':
      printf("Yellow");
      break;
    default:
      printf("\n enter a valid character ");
  }
  getch();
}
      
