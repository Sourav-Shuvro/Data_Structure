#include<stdio.h>
main()
{
    int a[100],i,n;
    printf("How much element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Output is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
