#include<stdio.h>
#include<math.h>
#define N 50
void main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q,sum;
    printf("enter rows and columns for the first matrix");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter rows and columns for the second matrix");
    scanf("%d%d",&p,&q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf(" first matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",&a[i][j]);
        }
    }
     printf("second matrix");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=q)
    {
        printf("the matrix is invalid");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            sum=0;
            for(k=0;k<m;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
        }
    }
    printf("multiplication is %d:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

