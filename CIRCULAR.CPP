#include<stdio.h>
#include<conio.h>
#define m 5
int f,r,a[m];
int isempty()
  {
    return f==r;
  }
int isfull()
  {
    return (r+1)%m==f;
  }
void insert(int e)
  {
   r=(r+1)%m;
    {
      a[r]=e;
    }
  }
int delet()
  {
    f=(f+1)%m;
    return a[f];
  }
void display()
  {
   int i;
   if(r>f)
   {
     for(i=(f+1)%m;i<=r;i++)
     printf("%d",a[i]);
   }
   else
   {
    for(i=(f+1)%m;i<=m-1;i++)
    printf("%d",a[i]);
    for(i=0;i<r;i++)
    printf("%d",a[i]);
   }
int main()
  {
    int opt,e,r=0,f=0;
    while(1)
    {
     printf("\n enter circular queue :");
     printf("1.enter\n2.delete\n3.display\n4.exit");
     scanf("%d",&opt);
     if(opt==4)
     {
     printf("bye");
     getch();
     return 0;
     }
   switch(opt)
      {
	case 1:
	       if(isfull())
	       printf("queue is full");
	       else
	       printf("\n enter the element :");
	       scanf("%d",&e);
	       insert(e);
	       printf("\n %d is inserted",e);
	       break;
       case 2:
	      if(isempty())
	      printf("queue is empty:");
	      else
	      {
	      printf("\n deleted element=%d",delet());
	      break;
      case 3:
	     if(isempty())
	     printf("\nit is empty");
	     else
	     {
	     printf("\n following elements are:\n");
	     display();
	     }
	     break;
     default: printf("\n improper element");
	      getch();
	 }
	 }
   }