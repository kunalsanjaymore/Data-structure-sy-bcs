#include<stdio.h>

int main()
{
  int a[100],n,i,num;
  printf("enter limit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  a[i]=rand();
   
  printf("number is random");
  for(i=0;i<n;i++)
 printf("%d",a[i]);

  printf("enter number to search");
 scanf("%d",&num);
 for(i=0;i<n;i++)
{
  if(a[i]==num)
  break;
}
if(i==n)
 printf("number is not found");
else
 printf("number is found");
}
