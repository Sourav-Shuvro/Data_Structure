#include<stdio.h>
#include<malloc.h>
struct link
{
   int data;
   struct link *next;
};

typedef struct link node;
node *h=0,*p=0,*q=0,*last=0;

int main()
{
    int i,x;
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
            q->next=p;
       {
        q=p;
       }
        printf("\nwant more node?if no press n:\n");
        ch=getch();
    }
    q->next=h;
    last=q;
    //display//
    p=h;
    for(;;)
        {
        printf("\n%d\t%d\t%d",p,p->data,p->next);
        if(p->next==h)
            break;
        p=p->next;
    }
    //insert as first node//
    p=(node*)malloc(sizeof(node));
    printf("\nEnter data:");
    scanf("%d",&p->data);
    p->next=h;
    last->next=p;
    h=p;
    printf("successfully insertion:\n");
    //display//
    p=h;
    for(;;){
        printf("\n%d\t%d\t%d",p,p->data,p->next);
        if(p->next==h)
            break;
        p=p->next;
    }
     //insert as last node//
    p=(node*)malloc(sizeof(node));
    printf("\nEnter data:");
    scanf("%d",&p->data);
    last->next=p;
    p->next=h;
    printf("successfully insertion:\n");
    //display//
    p=h;
    for(;;){
        printf("\n%d\t%d\t%d",p,p->data,p->next);
        if(p->next==h)
            break;
        p=p->next;
    }
      //insert anywhere//
    int a;
    printf("\nAfter which data:\n");
    scanf("%d",&a);
    q=h;
    while(1){
        if(q->data==a)
            break;
        q=q->next;
    }
    p=(node*)malloc(sizeof(node));
    printf("\nEnter data:");
    scanf("%d",&p->data);
    p->next=q->next;
    q->next=p;
    printf("successfully insertion:\n");
    //display//
    p=h;
    for(;;){
        if(p->next==h)
            break;
        printf("\n%d\t%d\t%d",p,p->data,p->next);
        p=p->next;
    }
}


