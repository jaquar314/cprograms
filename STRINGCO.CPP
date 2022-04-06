#include<stdio.h>
#include<string.h>
#include<conio.h>

int strcmp(char*p,char*q)
{
  while(*p==*q)
  {
    p++;
    q++;
  }
  ((*p==*q)&&(*p!='\0'));
  if(*p=='\0')
  return 0 ;
  else
  return *p-*q;
  }
int main()
{
clrscr();
char *p="saikiran";
char *q="saiky";
printf("\n returned is %d",strcmp(p,q));
getch();
return 0;
}