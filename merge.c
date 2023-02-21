#include<stdio.h>
void main()
{
    int i,j,k,l,n,m,size,temp;
    int a[50],b[50],c[50];
    printf("Enter the number of elements in first array");
    scanf("%d",&n);
    printf("Enter the number of elements in second array");
    scanf("%d",&m);
    size=m+n;
    printf("Enter the elements in first array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array \n");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted form of 1st array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
     for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("\n The sorted form of second array is \n");
    for(i=0;i<m;i++)
    {
        printf("%d,",b[i]);
    }
   for(i=0;i<n;i++)
   {
       c[i]=a[i];
   }
   for(i=n,j=0;i<size&&j<m;j++,i++)
   {
       c[i]=b[j];
   }
   printf("\nCombined Array before sorting is \n ");
   for(i=0;i<size;i++)
   {
       printf("%d,",c[i]);
   }
   printf("\n");


   for(i=0;i<size;i++)
   {
       for(j=i+1;j<size;j++)
       {
           if(c[i]>c[j])
           {
               temp=c[i];
               c[i]=c[j];
               c[j]=temp;
           }
       }
   }
printf("\n The sorted array after merging is \n");
for(i=0;i<size;i++)
{
    printf("%d,",c[i]);
}
}

