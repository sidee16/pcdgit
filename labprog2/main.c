#include <stdio.h>
int main ()
{
int a, rev=0;
printf("enter the no to reverse\n");
scanf("%d", &a);
 
while(a != 0)
      { 
       rev = rev*10;
       rev = rev + a%10;
       a   = a/10;
      }
 printf("reverse of the no is = %d\n", rev);
         if(a == rev){
                    printf("it is a palindrome\n");
                  }
                else{
                      printf("not a palindrome\n");
                    }

 return 0;
}
