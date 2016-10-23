#include <stdio.h>
#include <stdlib.h>


int reverse(int num)
{
    int rev=0;


    while(num!=0)
    {
      rev=rev*10;
      rev=rev+num%10;
      num=num/10;
    }

    return rev;
}

int chkp(int num, int rev)
{
    int flag;
    if(rev==num)
    {
        flag=0;
    }
    else
        {
          flag=1;
        }
   return flag;
}

int main()
{
    int num,a,b;
    printf("enter the number \n");
    scanf("%d",&num);
    if(num==0)
    {
        printf("u shit guy \n");
    }
    else
        {
         a=reverse(num);
         printf("reverse of %d is %d \n",num,a);
         b=chkp(num,a);
         if(b==0)
         {
             printf("%d a palindrome \n",num);
         }
         else{
            printf("%d is not a palindrome \n",num);
         }
        }
    return 0;
}
