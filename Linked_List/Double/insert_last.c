#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link*next;
    struct link*prev;
};
typedef struct link node;
node *p=0,*h=0,*q=0,*temp=0,*last=0;

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
            q->prev=temp;
        }
        temp=q;
        q=p;
        printf("Want more?press n:");
        ch=getch();
    }
    q->next=0;
    q->prev=temp;
    last=q;
    p=h;
    for(;;)
    {
        if(p==0)
            break;
        printf("\n%d\t%d\t%d\t%d",p->prev,p,p->data,p->next);
        p=p->next;
    }
    int y;
    scanf("%d",&y);
    p=(node*)malloc(sizeof(node));
    p->data=y;
    last->next=p;
    p->prev=last;
    p->next=0;
    p=h;
while(1)
    {
        if(p==0)
            break;
        printf("\n%d  %d  %d   %d",p->prev,p,p->data,p->next);
        p=p->next;
    }
}

