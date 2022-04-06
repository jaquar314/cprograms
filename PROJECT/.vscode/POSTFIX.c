#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define max 30
double a[max];
int top;
double getval(double x,double y,char z)
  {
    switch(z)
      {
	case '+': return x+y;
	case '-': return x-y;
	case '*': return x*y;
	case '/': return x/y;
	case '^': return pow(x,y);
	default:printf("\n improper opearator");
	getch();
	exit(0);
      }
 }
 int isdigit(char x)
     {
       return (x>='0'&&x<='9');
     }
 void push(double x)
     {
      a[++top]=x;
     }
     double pop()
     {
     return a[top--];
     }
     double eval(char a[])
     {
      int i;
      double opnd1,opnd2,value;
      top=-1;
      for(i=0;a[i];i++)
      if(isdigit(a[i]))
      push((double)(a[i]-'0'));
      else
      {
	opnd2=pop();
	opnd1=pop();
	value=getval(opnd1,opnd2,a[i]);
	push(value);
      }
   return pop();
   }
   int main()
    {
      char post[80];
      int i;
      
      printf("\n enter your post fix expression:");
      gets(post);
      printf("\n value of the postfix expression is %lf",eval(post));
      getch();
      return 0;
    }
