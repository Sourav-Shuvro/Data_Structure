#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link*next;
    struct link*prev;
};
typedef struct link node;
node *p=0,*h=0,*q=0,*temp=0;

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
    p=h;
    for(;;)
    {
        if(p==0)
            break;
        printf("\n%d\t%d\t%d\t%d",p->prev,p,p->data,p->next);
        p=p->next;
    }
    p=(node*)malloc(sizeof(node));
    scanf("%d",&p->data);
    p->next=h;
    h->prev=p;
    p->prev=0;
    h=p;
    p=h;
    for(;;)
    {
        if(p==0)
            break;
        printf("\n%d\t%d\t%d\t%d",p->prev,p,p->data,p->next);
        p=p->next;
    }
}
