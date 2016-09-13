#include <stdio.h>
int reverse(int num)
      {
         int rev=0;
         int temp;
         temp=num;
    while(temp != 0)
           {
        rev=rev*10;
        rev=rev+temp%10;
        temp=temp/10;
           }
    return rev;
      }
int main()
{
    int x,r;
    printf("enter the number\n");
    scanf("%d", &x);
    r=reverse(x);
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


