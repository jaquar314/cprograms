#include<stdio.h>
#include<conio.h>
#include<string.h>
int reverse(char[],int,int);
int main()
{
  clrscr();
  char str1[10];
  int size;
  printf("enter the string :");
  scanf("%s",str1);
  size=strlen(str1);
  reverse(str1,0,size-1);
  printf("the string after reversing is : %d\n",str1);
  getch();
  return 0;
}
int reverse(char str1[],int index,int size)
{
 char temp;
 temp=str1[index];
 str1[index] = str1[size-index];
 str1[size-index] = temp;
 if (index==size/2)
   {
     return str1;
   }
   reverse(str1,index+1,size);
}
