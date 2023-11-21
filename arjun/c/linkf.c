#include<stdio.h>
#include<tdlib.h>

struct new
{
  int data;
  stuct new *next;
};
 stuct new *head;
 
int main()
{
  int data1;
  new *temp;
  new *prev;
  
  printf("enter the valude data\n");
  scanf("%d",&data);
  
  if(head==NULL)
  {
    head=temp;  
  
  } 
  else
  {
   temp=(new*)malloc(sizeof(new));
   temp->data=data1;
   temp->next=NULL;
  }
  return 0;
}
