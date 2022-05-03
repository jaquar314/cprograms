#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char n[]='sai';
  printf("\n length of the name:%d",stlen(n));
  return 0;
}
int stlen(char *p)
{
 int i=0;
 while(*p)
 {
 i++;
 p++;
 }
 getch();
 return i;
 }