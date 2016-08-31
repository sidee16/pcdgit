#include <stdio.h>
int main()
{
int i, n, sum;
printf("enter the no. \n");
scanf("%d", &n);


sum=0;
for(i=1; i<=n; i++)
{
sum = sum + i;
}

printf("sum of the %d no. is %d\n", n, sum);
return 0;
}
