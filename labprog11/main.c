#include <stdio.h>

int isprime(int n)
{
    int i,p;
    
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            p=0;
            break;
           //is not prime
        }
        else 
            {
            p=1;
            //is prime
            }
        
    }
    return p;
}

int main()
{
    int num,a;
    
    printf("enter the number\n");
    scanf("%d", &num);
    
    a=isprime(num);
    
    if(a==0)
    {
        printf("its not a prime\n");
    }
    else
    {
        printf("its prime\n");
    }
    
    
    //range
    
    
    int j,p,q,b;
printf("enter the range\n");
scanf("%d%d",&p,&q);
printf("prime numbers between %d and %d are\n",p,q);
for(j=p+1;j<q;j++)
{
b=isprime(j);
   if(b==1)
	     {
         	printf("%d\n",j);
      	}
}
    
     return 0;
}

