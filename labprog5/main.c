
#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter three number \n");
  scanf("%d%d%d", &a, &b, &c);
  
  if(a>b)
       if (a>c)
       printf("greatest of the three is: %d \n", a);
       else
       printf("greatest of the three is: %d \n", c);
  else if(b>c)
  printf("greatest of the three is: %d \n", b);
  else
  printf("greatest of the three is: %d \n", c);
  return 0;
} 
