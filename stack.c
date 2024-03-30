#include<stdio.h>
int a[1000],i,n,c,x,t=0;
void push();
void pop();
void display();
main()
{
    printf("Size:");
    scanf("%d",&n);

    while(c!=4)
    {
        printf("Enter choice:");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            scanf("Wrong Keyword");
        }
    }
}
    void push()
    {
        if(t>n-1)
        {
            printf("Stack Overflow");
        }
        else
        {
            printf("Enter push element:");
            scanf("%d",&x);
            a[t]=x;
            t++;
        }
    }
    void pop()
    {
        if(t<-1)
        {
            printf("Stack underflow");
        }
        else
        {
            printf("%d is delete",a[t-1]);
            t--;
        }
    }
    void display()
    {
        for(i=t-1;i>=0;i--)
            printf("%d  ",a[i]);
    }
