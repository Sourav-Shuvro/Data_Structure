#include<stdio.h>
main()
{
    int a[1000],n,i,j,temp;
    printf("How much element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Bubble sort is:");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
