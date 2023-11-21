#include<stdio.h>
#include<stdlib.h>
struct bins 
{
 int data;
 struct bins *l;
 struct bins *r;

};

 struct bins *temp; 
 struct bins *head=NULL;
 
  
void insert()
 {
   int data;
   struct bins *temp;
   struct bins *temp1;
   struct bins *root1;

   temp=(struct bins *)malloc(struct bin);
   printf("enter the data to node");
   scanf("%d",&data);s
   temp->data=data;
   
   if(head==NULL)
    {
     
     head=temp;
    
    } 
    
    
}


void search()
{
 


}




int main()
{
 int ch;
 while(1)
 {
  printf("menu\n1.insert into tree\n2.display tree\n3.display\nEnter a choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:inser();
          break;
   case 2:
          break;
   case 3:exit(1);
          break;             
  
  }
 }
}

