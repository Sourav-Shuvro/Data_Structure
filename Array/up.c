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
    printf("Enter element:");
    scanf("%d",&q);
    a[p]=q;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
