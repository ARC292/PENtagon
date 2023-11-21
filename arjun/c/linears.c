#include<stdio.h>

int main()
{
 int a[20],n,num,f=0,i;
 printf("enter the size of the array");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("enter the num to search:");
 scanf("%d",&num);
 
 for(i=0;i<n;i++)
  {
    if(a[i]==num)
    {
     f=1;
     printf("element found in %d position:",i+1);
     break;
    
    }
  }
 if(f==0)
 {
  printf("\nelemnent is not available");
 } 
 
}


