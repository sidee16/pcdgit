#include<stdio.h>
float s(float num)
{
    float r1,r2;
    r1=1;
    r2=num;
    float diff=(fabs(r1-r2));
    while(diff>0.0000001)
    {
        r1=(r1+r2)/2;
        r2=num/r1;
        diff=(fabs(r1-r2));
    }
    return r1;
}
int main()
{
float num,r;
printf("enter the number\n");
scanf("%f",&num);

r=s(num);
printf("square root of %f is %f",num,r);

    return 0;
}

































