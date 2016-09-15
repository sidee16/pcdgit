#include <stdio.h>
#include <stdlib.h>
float sine(float deg)
{
 float x,sum,term;
 int i;

 x=((3.14/180)*deg);

    term = x;
    sum = x;

    for(i=3; fabs(term) > 0.000001; i=i+2)
    {
       term= (-(term*x*x)/(i*(i-1)));
       sum = sum + term;
    }

    return sum;

}

int main()
{
     float deg,r;
    printf("enter the degree \n");
    scanf("%f", &deg);
    r=sine(deg);
    printf("sine(%f) = (%f)",deg,r);

    return 0;
}
