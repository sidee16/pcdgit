#include <stdio.h>
int facto(int num)
{
    int i,fact=1;
    
    if(i==0)
    {
        fact=1;
    }
    else
    {
        
    for(i=num; i>1;i--)
        {
        fact=fact*i;
         }
        
    }
    
  return fact;
}

int main()
{
    int n,a;
    printf("enter the number \n");
    scanf("%d",&n);
    
    a=facto(n);
    
    printf("factorial of %d is %d",n,a);
  
    
 return 0;  
}
