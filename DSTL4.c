//WAP  IN C TO CREATE  TWO  SETS  AND  PERFORM  THE  DIFFRENCE OPERATION  ON  SETS
#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],k,m,n,t;
    printf("ABHAY BANSAL\n");
    printf("enter the value of m");
    scanf("%d",&m);
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements of a[i]");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of b[j]");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(int i=0;i<m;i++)
    {
        t=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            t=1;
        }
        if(t==0)
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("difference of array A-B is:");
    for(int i=0;i<k;i++)
    {
        printf("%d",c[i]);
    }
}