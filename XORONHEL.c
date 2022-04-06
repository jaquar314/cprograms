#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
 void main()
{
 clrscr();
 int i,len;
 char str[]="hello world";
 char str1[11];
 len = strlen(str);
 for(i=0;i<len;i++)
  {
    str1[i]=str[i]^0;
    printf("%c",str1[i]);
  }
  printf("\n");
  getch();

}

