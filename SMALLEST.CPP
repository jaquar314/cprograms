#include<stdio.h>
#include<conio.h>
int main()
{
 clrscr();
 int a[4],s,i,num;
 printf("enter the range :");
 scanf("%d",&num);
 for(i=0;i<num;i++)
 scanf("%d",&a[i]);
 s=a[0];
 for(i=0;i<=num;i++)
   {
     if (a[i]<s)
     {
     s=a[i];
   }
   }
printf("smallest value is : %d",s);
getch();
return 0;
}