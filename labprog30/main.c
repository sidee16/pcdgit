#include <stdio.h>
#include <stdlib.h>

float dis(float a, float b, float c)
{
    float d;
    d=((b*b)-(4*a*c));
    return d;
}

float rps(float a, float b)

{
    float rp;
    rp=(-b/(2*a));
    return rp;
}


float ips(float a,float d)
{
    float ip;

    if(d==0)
    {
       ip=0;
    }

    else if(d>0)
    {
        ip=((sqrt(d))/(2*a));

    }
    else
    {
       ip=((sqrt(-d))/(2*a));
    }
    return ip;
}

int main()
{
    float a,b,c,d,e,f;
    printf("enter the coefficients of quad eq. i.e a,b,c \n");
    scanf("%f%f%f",&a,&b,&c);
     float r1,r2;
    if(a==0)
    {
        printf("chutiya ho tum \n");
    }
    else
        {
          d=dis(a,b,c);
          e=rps(a,b);
          f=ips(a,d);
          if(d==0)
          {
              printf("roots are real and equal r1=r2=%f \n",e);
          }
          else if(d>0)
          {
              r1=e+f;
              r2=e-f;
               printf("roots are real r1=%f , r2=%f \n",r1,r2);
          }
          else
            {
            printf("roots are complex r1=%f+i%f, r2=%f+i%f \n",e,f,e,f);
          }

        }

    return 0;
}
