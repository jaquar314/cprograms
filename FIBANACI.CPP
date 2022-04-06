#include<stdio.h>
#include<conio.h>
int main()
{
int i=0,n,t,t1=0,t2=1;
clrscr();
printf("\n enter the number: ");
scanf("%d",&n);
printf("\n fibanacii is : 0 ");
while(i<n)
  {
    t=t1+t2;
    printf("%d",t);
    t2=t1;
    t1=t;
    i++;
   }
 getch();
 return 0;
 }

















