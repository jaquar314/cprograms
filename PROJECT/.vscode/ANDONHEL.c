#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 
 int i,len;
 char str[]="hello world";
 char str1[11];
 len = strlen(str);
 for(i=0;i<len;i++)
  {
   /*
    str1[i]=str[i]&&127;
    printf("%c\n",str1[i]);
    str1[i]=str[i]||127;
    printf("%c\n",str1[i]);*/
    str1[i]=str[i]^127;
    printf("%c\n",str1[i]);
  }
  printf("\n");
  getch();
  }