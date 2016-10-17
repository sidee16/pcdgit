#include <stdio.h>
#include <string.h>

void istr(int m, int n, char s[m][n])
{
    for(int i=0; i<m; i++)
    {
        printf("enter the sring");
        scanf("%s", &s[i]);
    }
}

void sort(int m, int n, char s[m][n])
{
    int flag=0;
    char temp[n];
    int t;
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            t=strcmp(s[j],s[j+1]);
            if(t>0)
            {
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

int search(int m,int n,char s[m][n],char key[n])
{
    int low=0;
    int high=m;
    int mid;
    int t;
    
    while(low<high)
    {
        mid=(low+high)/2;
        t=strcmp(s[mid],key);
        if(t>0)
        {
            high = mid-1;
        }
        else if(t<0)
        {
            low=mid+1;
        }
        else {
            return mid;
        }
        
    }
    return -1;
}

int main()
{
    int m,n;
    n=20;
    printf("enter the no. of string");
    scanf("%d",&m);
    
    char str[m][n];
     istr(m,n,str);
    sort(m,n,str);
    
    char key[n];
    printf ("enter the string to be found\n");
    scanf("%s", key);
    
    int sr;
    
    sr=search(m,n,str,key);
    
    if(sr>0)
    {
        printf("the location is %d" , sr);
    }
    else
    {
        printf("not available");
    }
    
    return 0;
}
