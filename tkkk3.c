#include <stdio.h>
#include <malloc.h>
struct node
{  char data;
   struct node *link;
} *head;
Ins(struct node *q)
{
   if(head==NULL)
   {   q->link==NULL;
       head=q;
   }
   else
   {   q->link=head;
       head=q;
   }
}
main()
{   char ch;
struct node *p;
head=NULL;
while((ch=getchar())!='\n')
{
   p=head;
   p->data=ch;
   Ins(p);
}
p=head;
while(p!=NULL)
{
   printf("%c",p->data);
   ;
}
}

