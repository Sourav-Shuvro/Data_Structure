#include<stdio.h>
main()
{
    int a[1000],i,n,e,p,f=0;
    printf("How much element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Searching Element:");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(a[i]==e)
        {
            f=1;
            p=i;
            break;
        }
    }
    if(f==1)
        printf("FOUND\nIndex No. %d",p);
    else
        printf("Not Found");
}
