#include<stdio.h>
#include<conio.h>

#define m 5
int f,r,a[m];
int isempty() {return (r<f);}
int isfull() { return r== m-1 ;}
void add(int e){a[++r]=e ;}
int del(){ int t=a[f++];
	   if(r<f)
	   {
	    r = -1 ; f=0 ;
	   }
	    return t;
	   }
void display()
 {
   int i;
   for(i=f;i<=r;i++)
   printf("%d ",a[i]);
 }
 int main()
  {
    int ch,e;
    // clrscr();
    f=0; r=-1;
    while(1)
    {
    // clrscr();
     printf("\nqueue implementensip :");
     printf("\n1.add\n2.delete\n3.delete\n4.exit");
     printf("\nenter your choice: ");
     scanf("%d",&ch);
     if (ch==4)
      {
	printf("bye");
	getch();
	return 0;
      }
  switch(ch)
  {
    case 1:if(isfull()) printf("unable to add queue is full");
	   else
	   {
	    printf("\n enter :");
	    scanf("%d",&e);
	    add(e);
	    }
	  break;
    case 2:
	   if(isempty())
	   printf("queue is empty");
	   else
	   del();
	   break;
    case 3:
	    display();
	    break;
    default: printf("error");
}
}
}


