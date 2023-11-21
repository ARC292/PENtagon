#include<stdio.h>
#include<stdlib>


struct linn
 {
   int data;
   struct linn *next;
 };
 
 struct linn *head;
 void insert()
 {
   if(head==null)
    {
       printf("enter the element to insert");
       scanf("%d,&data1");
       temp=(struct linn *)malloc(sizeof(struct linn));
       temp->data=data1;
       temp->next=NULL;
       head=temp;
       prev=temp;
   else
       {
        printf("enter the element to insert");
        scanf("%d,&data1");
        temp=(struct linn *)malloc(sizeof(struct linn));
        temp->data=data1;
        temp->next=NULL;
        prev->next=temp;
        prev=temp;
        
       }       
    } 
 void display()
    {
      ok=head;
      while(data!=NULL)
       {
        print("\n%d",ok->data);
        ok=ok->next;
       }  
    }   
 
 
 }
 
 
 int main()
 {
   int ch;
  while(1)
  {
   printf("menu\n1.insert\n2.display\n");
    switch()
    {
      case 1:insert();
      break;
      case 2:display();
      break;  
      default:printf("\ninvalid choice");
    } 
  } 
 }
