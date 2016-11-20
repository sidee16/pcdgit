#include<stdio.h>
#include<math.h>
int sums(int n,int a[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
float means(int n,int sum)
{
    int i;
    float me = 0;

    me = (sum) /(n);

    return me;
}

float dev(int n,int a[],float m)
{
    int i;
    float std,sumstd;
    for(i=0;i<n;i++)
    {
     sumstd = sumstd + pow((a[i] - m),2);
    }
    std = sqrt(sumstd/n);
    return std;
}

void input(int n,int a[])
{
    int i;
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        printf("enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
int main()
{
 int n,s;
 float m,d;
 printf("enter the no. of elements of array = \n");
 scanf("%d",&n);

 int a[n];
 input(n,a);
 s = sums(n,a);
 m = means(n,s);
 d = dev(n,a,m);

 printf("sum is = %d\nmean is = %.6f\nstandard deviation is = %.6f\n",s,m,d);

 return 0;
}
