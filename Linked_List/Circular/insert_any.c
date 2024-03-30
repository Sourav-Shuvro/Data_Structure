#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link*next;
};
typedef struct link node;
node *p=0,*q=0,*h=0,*last=0;
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
        printf("Want  more?if no press n\n");
        ch=getch();
    }
    q->next=h;
    last=q;
    p=h;
    for(;;)
    {
        printf("\n%d\t%d\t%d",p,p->data,p->next);
        if(p->next==h)
            break;
        p=p->next;
    }
    int y;
    scanf("%d",&y);
    q=h;
    while(1)
    {
        if(q->data==y)
            break;
        q=q->next;
    }
    p=(node*)malloc(sizeof(node));
    scanf("%d",&p->data);
    p->next=q->next;
    q->next=p;
    p=h;
    for(;;)
    {
        printf("\n%d\t%d\t%d",p,p->data,p->next);
        if(p->next==h)
            break;
        p=p->next;
    }
}
