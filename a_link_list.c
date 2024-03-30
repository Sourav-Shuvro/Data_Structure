#include<stdio.h>
#include<malloc.h>

struct link
{
    int data;
    struct link *next;
};

typedef struct link node;
node *p=0, *q=0, *h=0;

int main()
{
    int x,i;
    char ch;
    /////create link list/////
    while(ch!='n')
    {
        p=(node*)malloc(sizeof(node));
        scanf("%d",&p->data);
        if(h==0)
        {
            h=p;
        }
        else
            q->next=p;
        {
             q=p;
        }
        printf("want more node? if no press n:\n");
        ch=getch();

    }
    q->next=0;
    p=h;
    for(;;)
    {
        if(p==0)
            break;
        printf("%d\t\t%d\t%d\n",p,p->data,p->next);
        p=p->next;
    }

    ////insert as a first node

    int y;
    printf("enter data");
    scanf("%d",&y);
    p=(node*)malloc(sizeof(node));
    p->data=y;
    p->next=h;
    h=p;

    for(;;)
    {
        if(p==0)
            break;
        printf("%d\t\t%d\t%d\n",p,p->data,p->next);
        p=p->next;
    }


    /////Insert as a last node///
    int z;
    printf("enter data:");
    scanf("%d",&z);
    q=h;
    while(1)
    {
        if(q->next==0)
            break;
        q=q->next;
    }
    p=(node*)malloc(sizeof(node));
    p->data=z;
    q->next=p;
    p->next=0;

p=h;
 for(;;)
    {
        if(p==0)
            break;
        printf("%d\t\t%d\t%d\n",p,p->data,p->next);
        p=p->next;
    }
      // TO INSERT ANY WHERE OF A NODE //////
     int u;
    printf("\nAfter which data:\n");
    scanf("%d",&u);

    q=h;
    while(1)
    {
        if (q->data==u)
            break;
        q=q->next;
    }
    p=(node*)malloc(sizeof(node));
    printf("Enter data:");
    scanf("%d",&p->data);
    p->next=q->next;
    q->next=p;

    p=h;
    for ( ; ; )
    {
        if (p==0)
            break;
        printf("\n %d\t %d\t %d",p,p->data,p->next);
        p=p->next;
    }

}

