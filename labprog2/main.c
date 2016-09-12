#include <stdio.h>
int reverse(int num , int rev)
      {
    while(num != 0)
           {
        rev=rev*10;
        rev=rev+num%10;
        num=num/10;
           }
    return rev;
      }
int main()
{
    int x,y=0,r;
    printf("enter the number\n");
    scanf("%d", &x);
    r=reverse(x,y);
    printf("reverse of the number is %d\n", r);
    if(r==x)
      {
        printf("its a palindrome\n");
    }
    else{
        printf("its not a palindrome\n");
    }
return 0;
}

