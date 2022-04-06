#include<stdio.h>
#include<conio.h>
struct book
{
char name[25]; char author[25]; int pages;
}
void display1(char *,char *,int);
void display2(struct book);
void display3(struct book);
int main()
{
  struct book={"let us c","rk",464}
  display1(b1 name,b1 author,b1 pages);
  display2(b2);
  display3(&b3);
  getch();
  return 0;
}
{
void display1(char*n,char*a,int pq)
{
printf("%s%s%d\n",n,a,pq);
}
}
{
void display2(struct book b)
{
printf("%s%s%d\n",b1 name,b1 author,b1 pages);
}
}
{
void display3(struct book *pb)
{
printf("%s%s%d\n",pb->name,pb->author,pb->pages);
}
}
