#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,e,f,r1,r2,rr,ir;
    printf("enter the cofficientof the equation \n");
    scanf("%lf%lf%lf", &a,&b,&c);
   
    d=((b*b)-((4*a)*c)) ;
   
    if(d == 0)
    {
        r1=r2= (-b/(2*a));
        printf("roots are equal r1=r2 %lf\n", r1);   
    }
    else if(d>0)
    {
        e=sqrt(d);    
        r1=(-b+e)/(2*a) ;
        r2=(-b-e)/(2*a) ;
        printf("roots are real r1=%lf, r2=%lf\n", r1 , r2);
    }
    else
    {
        f=sqrt(-d);
        rr=(-b/(2*a));
        ir=(f/(2*a));
        printf("roots are complex r1=%lf+i%lf , r2=%lf-i%lf \n", rr,ir,rr,ir);
    }
    return 0;
}
