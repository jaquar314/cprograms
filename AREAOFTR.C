#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void)
{
 
 float ax,ay,bx,by,cx,cy,cz,A,B,C,side,area;
 printf("print x,y co ordinates:\n");
 printf("input first co-ordinate of x:\n ");
 scanf("%f",&ax);
 printf("enter 2 x co ordinate:\n");
 scanf("%f",&bx);
 printf("enter the 3rd co-ordinate of x:\n");
 scanf("%f",&cx);
 printf("input first co-ordinatees of y:\n ");
 scanf("%f",&ay);
 printf("enter the 2nd co-ordinate of y:\n");
 scanf("%f",&by);
 printf("enter the 3rd co ordinate of y:\n");
 scanf("%f",&cy);
 printf("%f\n,%f\n,%f\n",ax,bx,cx);
 printf("%f\n,%f\n,%f\n",ay,by,cy);
 A=sqrt(((bx-ax)*(bx-ax))+((by-ay)*(by-ay)));
 B=sqrt(((cx-bx)*(cx-bx))+((cy-by)*(cy-by)));
 C=sqrt(((ax-cx)*(ax-cx))+((ay-cy)*(ay-cy)));
 side=((A+B+C)/2);
 area=sqrt(side*(side-A)*(side-B)*(side-C));
 printf("area of the triangle is %f",area);
 getch();
 return 0;
}