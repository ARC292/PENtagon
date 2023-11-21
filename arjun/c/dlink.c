#include<stdio.h>
#include<stdlib.h>

struct lin
{
 int data;
 struct lin *next;
 struct lin *prev;

};
 struct lin *head=NULL;
 struct lin *temb;
 struct lin *end;


  void insert()
  {
    int data;
    struct lin *temp1;
    printf("enter the value:");
    scanf("%d",&data);
    temb=(struct lin*)malloc(sizeof(struct lin));
    temb->data=data;


    if(head==NULL)
    {
     temb->next=NULL;
     temb->prev=NULL;
     head=temb;
     end=temp1;
    }
    else
    {
     temp1=head;
     while(temp1->next!=NULL)
     {
      temp1=temp1->next;
     }

     temb->next=NULL;
     temb->prev=temp1;
     temp1->next=temb;
     end=temb;
    }
  }

  void display()
  {
   if(head==NULL)
   {
    printf("the link list is empty\n");
   }
   else
   {
    struct lin *lol;
    lol=head;
    while(lol->next!=NULL)
    {
     printf("%d\n",lol->data);
     lol=lol->next;

    }
    if(lol->next==NULL)
     {
     printf("%d",lol->data);
     }

   }
  }

void insertf()
 {
    int data;
    struct lin *temp1;
    printf("enter the value:");
    scanf("%d",&data);
    temb=(struct lin*)malloc(sizeof(struct lin));
    temb->data=data;

  if(head==NULL)
   {
    temb->next=NULL;
    temb->prev=NULL;
    head=temb;
   }
   else
   {
    temb->next=head;
    temb->prev=NULL;
    head=temb;
    head->prev=temb;
   }
 }

void insertpos()
{
   int data,pos,c=0;
    struct lin *temp1;
    struct lin *pos1;
    struct lin *pos3;

    printf("enter the position to insert:");
    scanf("%d",&pos);
    printf("enter the value:");
    scanf("%d",&data);
    temb=(struct lin*)malloc(sizeof(struct lin));
    temb->data=data;

    temp1=head;
    if(pos==1)
    {
     temb->next=head;
    temb->prev=NULL;
    head=temb;
    head->prev=temb;

    }
    else{
     while(temp1->next!=NULL)
    {
     c=c+1;
     if(pos-1==c)
     {
      pos1=temp1;

     }
     if(pos==c)
     {
      pos3=temp1;
     }

     temp1=temp1->next;
    }
    if(pos==c+1)
    {
     pos1->next=temb;
     temb->next=end;


    }
    else
   {

    pos1->next=temb;
    temb->prev=pos1;
    temb->next=pos3;
    pos3->prev=temb;
   }
  }
}

void deletef()
{

    if(head==NULL)
    {
     printf("list is empty");
    }
    else
    {
     head=head->next;
     head->prev=NULL;

    }
}

void deleteend()
{
 struct lin *lol;
 struct lin *tok;
    if(head==NULL)
    {
     printf("list is empty");
    }
    else
    {
     lol=head;
     while(lol->next!=NULL)
      {
      tok=lol;
      lol=lol->next;

      }
      tok->next=NULL;
      end=tok;
    }
}

void rtraverse()
{
  struct lin *temp1;
  if(head==NULL)
   {
    printf("the link list is empty\n");
   }
   else
   {
    struct lin *lol;
    lol=end;
    while(lol->prev!=NULL)
    {
      printf("%d\n",lol->data);
      lol=lol->prev;
    }
    if(lol->prev==NULL)
     {
     printf("%d\n",lol->data);
     }
   }

}

void deletepos()
 {
  int pos,c=0;
  struct lin *temp1;
  struct lin *pos1;
  struct lin *pos3;
  struct lin *end;
  printf("enter the position to delete:\n");
  scanf("%d",&pos);
  if(head==NULL)
  {
   printf("the list is empty\n");
  }
  if(pos==1)
  {
     head=head->next;
     head->prev=NULL;
  }
  else
  {
    temp1=head;
    while(temp1->next!=NULL)
    {
      c=c+1;
      if(pos-1==c)
      {
       pos1=temp1;

      }
      if(pos+1==c)
      {
       pos3=temp1;
      }
     temp1=temp1->next;
     }
   if(pos==c)
   {
    pos1->next=end;
    end->prev=pos1;
   }
   if(pos==c+1)
   {

     temp1->next=NULL;
     end=temp1;
   }
   else
    {
       pos1->next=pos3;
       pos3->prev=pos1;
    }
 }
}

void search()
{
 int num,c=1;
 struct lin *lol;
 printf("enter the number to search: ");
 scanf("%d",&num);

 lol=head;
 while(lol->next!=NULL)
  {

   if(lol->data==num)
    {
     printf("data found in %d position",c);
    }
    lol=lol->next;
    c=c+1;
  }
 if(end->data==num)
   {
    printf("data found in %d position",c);
   }
  }





int main()
{
  int ch;
 while(1)
 {
  printf("\nmenu\n1.insert\n2.insert first\n3.insert at a position\n4.delete at first\n5.reverse traversal\n6.delete at end\n7.deletepos\n8.search\n9.display\n10.exit\nenter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:insert();
	  break;
   case 2:insertf();
	  break;
   case 3:insertpos();
	  break;
   case 4:deletef();
	  break;
   case 5:rtraverse();
	  break;
   case 6:deleteend();
	  break;
   case 7:deletepos();
	  break;
   case 8:search();
	  break;
   case 9:display();
	  break;
   case 10:exit(1);

   default:printf("invalid choice\nselect one from above");
	   break;
  }
 }
}
