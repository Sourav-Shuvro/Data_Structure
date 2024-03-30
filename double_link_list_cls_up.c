#include<stdio.h>
#include<malloc.h>

struct link
{
    int data;
    struct link *next;
    struct link *prev;
} ;
//*h=0,*p=0,*q=0;
typedef struct link node;
node *h = 0, *p=0, *q=0,*temp=0,*last=0;


int main()
{
    int i,x;
    char ch;


///////////// create new node////////////////////

    while(ch!='n')
    {
        p=(node*)malloc(sizeof(node));
        printf("enter data:\n");
        scanf("%d",&p->data);
        //p->data=x;
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
        printf("\nwant more node if press y if no press n\n");
        ch=getch();
    }
    q->prev=temp;
    q->next=0;
last=p;

 printf("\n\npevious       personal       data          next\n");
p=h;
for(;;)
{
if(p==0)
        break;

    printf("\n   %d       %d        %d           %d\n",p->prev,p,p->data,p->next);

    p=p->next;
}


///////////////Insert as a first node/////////////////

int y;
    printf ("\n Enter your data: ");
    scanf ("%d", &y);
     p=(node*)malloc(sizeof(node));
    p ->data = y;
    p ->next = h;
    p->prev=0;
    h->prev=p;
    h = p;
    printf ("Successfully insertion");


printf("\n\npevious       personal       data          next\n");
p=h;
for(;;)
{
if(p==0)
        break;

    printf("\n   %d       %d        %d           %d\n",p->prev,p,p->data,p->next);

    p=p->next;
}
/////////////Insert as a last node/////////////
int z;

    printf ("\nEnter your data: ");
    scanf ("%d", &z);
    p = (node*) malloc (sizeof(node));
    p->data = z;
    p->prev=last;
    last ->next = p;
    p->next = 0;
    last=p;
    printf ("Successfully insertion");

printf("\n\npevious       personal       data          next\n");

p=h;
for(;;)
{
if(p==0)
        break;

    printf("\n   %d       %d        %d           %d\n",p->prev,p,p->data,p->next);

    p=p->next;
}
/////insert as anywhere///////////////

int c, d;
    printf ("\nAfter which data: ");
    scanf ("%d", &c);
    q = h;
    while (1)
    {
        if (q->data ==c) break;
        q = q->next;
        if (q == 0)
        {
            printf ("Not found");
            break;
        }
    }

    printf ("\nEnter your data: ");
    p = (node*) malloc (sizeof(node));
    scanf ("%d", &p->data);

    //p->data = d;
    p->next = q -> next;
    p->prev=q;
    q ->next = p;
    printf ("\nSuccessfully insertion\n");


printf("\n\npevious       personal       data          next\n");
p=h;
for(;;)
{
if(p==0)
        break;

    printf("\n   %d       %d        %d           %d\n",p->prev,p,p->data,p->next);

    p=p->next;
}

int a, flag;
    printf ("\nEnter which data: \n");
    scanf ("%d", &a);
    p = h;
    flag = 0;
    while (1)
    {
        if (p->data == a)
        {
            //flag = 1;
            break;
        }
        q = p;
        p = p->next;
        if (p==0) break;
    }
   // if (flag == 1)
        if ( p == h)
            h = h->next;
        else
            q->next = p->next;
            last->prev=q;
    //else

        //printf ("Not found !!");




        printf("\n\npevious       personal       data          next\n");
p=h;
for(;;)
{
if(p==0)
        break;

    printf("\n   %d       %d        %d           %d\n",p->prev,p,p->data,p->next);

    p=p->next;
}
}






