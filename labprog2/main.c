#include <stdio.h>
int main()
{
int n,rev=0,temp;

printf("enter a number\n");
scanf("%d",&n);

temp=n;

while(temp!=0)
{
rev=rev*10;
rev=(rev+temp%10);
temp=temp/10;
}

printf("reverse of the no is %d \n",rev);

if(n==rev)
{
printf("its a palindrome\n");
}
else
{
printf("its not a palindrome \n");
}
}

