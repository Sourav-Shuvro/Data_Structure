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
    printf("Enter insert element:");
    scanf("%d",&q);
    for(i=n;i>p;i--)
    {
        a[i]=a[i-1];
    }
    a[p]=q;
    n=n+1;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
