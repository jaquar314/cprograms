#include<stdio.h>
#include<conio.h>
# define m 5
int top=-1,a[m];
int isempty()
  {
   return top==-1;
  }
int isfull()
  {
    return top==m-1;
  }
void push(int e)
  {
    a[++top]=e;
  }
int pop()
  {
    top=top-1;
    return a[top];
  }
void display()
  {
    int i;
    for(i=top;i>=0;i--)
    printf("\n%d",a[i]);
  }
int main()
  {

    int ch,e;
    top=-1;
    while(1){
    
    printf("\n enter the stock implementenship :");
    printf("\n1.push,\n2.pop\n3.display\n4.exit");
    printf("enter your choice");
    scanf("%d",&ch);
    if(ch==4)
    {
      printf("bye");
      getch();
      return 0;
    }
switch(ch)
  {
    case 1:
	if(isfull())
	printf("unable to add");
	else
	{
	printf("\n enter :");
	scanf("%d",&e);
	push(e);
	}
       //	getch();
	break;
    case 2:
	if(isempty())
	printf("queue is empty :");
	else

	printf("poped element is :%d",pop());
	getch();
	break;
   case 3:
	display();
	getch();
	break;
	default: printf("error");
      }
    }
}

