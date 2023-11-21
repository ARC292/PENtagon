#include<stdlib.h>
#include<stdio.h>
 
 struct bin
  {
    int data;
    struct bin *l;
    struct bin *r;
    struct bin *root; 
  };
  
 struct bin *head=NULL; 
 struct bin *temp;  
void create()
{
 
  int data;
  struct bin *temp;
  struct bin *temp1;
  temp=(struct bin *)malloc(sizeof(struct bin));
  printf("enter the node data:");
  scanf("%d",&data);
  temp->data=data;
  root=temp;
 if(head==NULL)
 {
  head=temp;
  temp->l=NULL;
  temp->r=NULL;
  root- .temp;
 }
 
 
int main()
{
  int ch,times;
  while(1)
  {
   printf("menu\n1.enter the node\n2.diasplay tree\n3.exit");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
           break;
    case 2: 
           break;
    case 3: 
           break;
    default:printf("\ninvalid option");
                       
   }
  }
}  
