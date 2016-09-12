#include <stdio.h>
int main ()
{
int a, rev=0,temp;
printf("enter the no to reverse\n");
scanf("%d", &a);
temp=a; 
while(temp != 0)
      { 
       rev = (rev*10);
       rev = (rev + (temp%10));
       temp   = (temp/10);
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
