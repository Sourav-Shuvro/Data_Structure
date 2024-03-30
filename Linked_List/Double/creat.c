#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link*next;
    struct link*prev;
};
typedef struct link node;
node *p=0,*q=0,*h=0,*temp=0;
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
        printf("want more node if press y if no press n\n");
        ch=getch();
    }
    q->prev=temp;
    q->next=0;
    p=h;
for(;;)
{
if(p==0)
        break;
    printf("\n   %d       %d        %d           %d\n",p->prev,p,p->data,p->next);
    p=p->next;
}
}
