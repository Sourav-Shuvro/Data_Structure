#include<stdio.h>
main()
{
    int a[1000],n,e,i,beg,end,mid;
    printf("How much Element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Searching Element:");
    scanf("%d",&e);
    beg=1;
    end=n;
    mid=(beg+end)/2;
    while(beg<=end && a[mid]!=e)
    {
        if(e>a[mid])
        {
            beg=mid+1;
            mid=(beg+end)/2;
        }
        else
        {
            end=mid-1;
            mid=(beg+end)/2;
        }
    }
    if(e==a[mid])
        printf("Found");
    else
        printf("Not Found");
}
