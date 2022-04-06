#include <stdio.h>
#include <conio.h>
int main()
{
  int n, p, j, i = 2;

  printf("enter the number :");
  scanf("%d", &n);
  while (i <= n)
  {
    p = 1;
    for (j = 2; j <= i / 2; j++)
      if (i % j == 0)
      {
        p = 0;
        break;
      }
  }
  if (p)
  {
    printf("%d", i);
    i++;
  }
  getch();
  return 0;
}