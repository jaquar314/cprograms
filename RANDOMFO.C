#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  int c,n;
  clrscr();
  printf("100 randam numbers in [1,100\n]");
  for(c=1;c<=100;c++)
  {
    n=rand() % 100 +1;
    printf("%d\n",n);
  }
 getch();
 return 0;
}