#include<stdio.h>
#include<conio.h>
int main()
{
 int n,r,sum=0;
 clrscr();
 printf("enter the value :");
 scanf("%d",&n);
 while(n>0)
 {
   r=n%10;
   n=n/10;
   sum=sum+r;
 }
printf("sum of the individual digits are : %d ",sum);
getch();
return 0;
}
