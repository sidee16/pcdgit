#include <stdio.h>
int leap(y)
{
  if(((y%4==0)&&(y%100!=0))||(y%400==0))
    return 0;
  else
    return 1;
}

int main()
{
  int year,r;
  printf("enter the year  :");
  scanf("%d\n",&year);
  r=leap(year);
  if(r==0)
  {
    printf("it is a leap year\n");
  }
  else if(r==1)
  {
    printf("it is not a leap year\n");
  }
  return 0;
}
