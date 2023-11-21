#include<stdio.h>
#include<stdlib.h>

struct lin
{
  int data;
  struct lin *next;
  struct lin *prev;
};
 struct lin *head=NULL;
 struct lin *temp;
 struct lin *end;

 
void insert()
{
  int data;
  struct lin *temp1;
  temp=(struct lin *)malloc(sizeof(struct lin));
  printf("enter the data\n:");
  scanf("%d",&data);
  temp->data=data;
  if(head==NULL)
  {
   temp->next=NULL;
   temp->prev=NULL;
   head=temp;
  }
  else 
  {
     temp1=head;
     temp->next=NULL;
     while(temp1->next!=NULL)
     {
         temp1=temp1->next;   
         printf("%d",temp1->data);    
     }
      
      temp1->next=temp;
      temp->prev=temp1;
    }
  }
  
void display()
{
   struct lin *temp1;
   temp1=head;
   while(temp1->next!=NULL)
     {
       printf("%d",temp1->data);
     } 
   if(temp1->next==NULL)
   {
     printf("%d",temp1->data);   
   }       
}




int main()
{
  int ch;
  while(1)
  {
    printf("menu\n1.insert to link\n2.display\n3.exit\nENTER YOUR CHOICE\n");
    scanf("%d",&ch);
    switch(ch)
    {
    
     case 1:insert();
            break;
     case 2:display();
            break;
     case 3:exit(1);
            break;              
     default :printf("invalid option");    
    }
  
  }

}
