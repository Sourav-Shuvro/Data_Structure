#include<stdio.h>
main()
{
    int a[100],i,n,p,q;
    printf("How much element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Position:");
    scanf("%d",&p);
    for(i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d  ",a[i]);
    }
}
