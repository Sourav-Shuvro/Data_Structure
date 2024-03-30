#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link *next;
};
typedef struct link node;
node *p=0,*q=0,*h=0;
main()
{
    char ch;
    while(ch!='n')
    {
    p=(node*)malloc(sizeof(node));
    scanf("%d",&p->data);
    if(h==0)
    {
        h=p;
    }
    else
    {
        q->next=p;
    }
    q=p;
    printf("Want more?if no press n\n");
    ch=getch();
    }
    q->next=0;
    p=h;
    for(;;)
    {
        if(p==0)
            break;
        printf("\n%d\t%d\t%d",p,p->data,p->next);
        p=p->next;
    }
    int z;
    scanf("%d",&z);
    p=(node*)malloc(sizeof(node));
    p->data=z;
    p->next=h;
    h=p;
    for(;;)
    {
        if(p==0)
            break;
        printf("\n%d\t%d\t%d",p,p->data,p->next);
        p=p->next;
    }
}

