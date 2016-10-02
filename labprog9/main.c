#include <stdio.h>
#include <stdlib.h>

void matrix(int m, int n, int a[m][n], int p, int q, int b[p][q], int c[m][q])
{
   int i,j,k;

   for(i=0 ; i<m ; i++)
    {
      for(j=0 ; j<q ; j++)
        {
        c[i][j]=0;
          for(k=0 ; k<n ; k++)
            {
                c[i][j]= (c[i][j] + (a[i][k] * b[k][j]));
            }
         }
     }

for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<q ; j++)
            {
            printf("c[%d][%d]=%d",i,j,c[i][j]);
            printf("\n");
            }
    }

}


int main()
{
int m,n,p,q,r,i,j;

printf("enter the element of matric a(m*n)m=,n=\n");
scanf("%d%d",&m,&n);
printf("enter the element of matric B(p*q)p=,q=\n");
scanf("%d%d",&p,&q);

int a[m][n],b[p][q],c[m][q];

 if(n!=p)
    {
 printf("can't multiply wrong input!!! try again \n");
      }
  else {

       printf("enter the matrices a(m*n) \n");
            for(i=0 ; i<m ; i++)
               {
                  for(j=0 ; j<n ; j++)
                    {
                      printf("a[%d][%d]\n",i,j);
                       scanf("%d",&a[i][j]);
                    }
                }

      printf("enter the matrices b(p*q) \n");
         for(i=0 ; i<p ; i++)
               {
                 for(j=0 ; j<q ; j++)
                    {
                     printf("b[%d][%d]\n",i,j);
                      scanf("%d",&b[i][j]);
                    }
               }

printf("new matrix is\n ");
r=matrix (m,n,a,p,q,b,c);

    return r;


      }


return 0;

}
