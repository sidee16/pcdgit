#include <stdio.h>


int main()
{
  int a[100][100],b[100][100];
  int m,n,p,q,r;

printf("enter the element of matric a(m*n)m=,n=\n");
scanf("%d%d",&m,&n);
printf("enter the element of matric B(p*q)p=,q=\n");
scanf("%d%d",&p,&q);

int i,j;
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
 if(n!=p)
    {
 printf("can't multiply wrong input!!! try again \n");
      }
  else {

    r=matrix (m,n,p,q,a,b);

  }
    printf("new matrix is %d", r);

return 0;
}


int matrix(int m , int n, int p, int q, int a[m][n] , int b[p][q] )

{
   int i,j,k;


                 int c[100][100];

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

return c[i][j];
}
