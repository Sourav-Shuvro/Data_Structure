#include<stdio.h>
main()
{
    int a[1000],i,n,d,temp;
    printf("How much element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Insertion sort is:");
    for(i=1;i<n;i++)
    {
        d=i;
        while(d>0 &&a[d]<a[d-1])
        {
            temp=a[d];
            a[d]=a[d-1];
            a[d-1]=temp;
            d--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
