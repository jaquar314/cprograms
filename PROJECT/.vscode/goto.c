
#include <stdio.h>  
int main()   
{  
  int num,i=1;   
  printf("Enter the number whose table you want to print?");   
  scanf("%d",&num);  
  hi:   
  printf("%d x %d = %d\n",num,i,num*i);  
  i++;  
  if(i<=100)  
  goto hi; 
     
}  