#include<stdio.h>

int main()
{
  int a[100],n,i,num,p;
  int search(int a[100],int num,int n);
  printf("enter limit");
 scanf("%d",&n);
 printf("enter n number");
 for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("enter number to search");
scanf("%d",&num);
p=search(a,num,n);

 if(p==-1)
printf("number is not found");
else
 printf("number is found=%d",p);
}

int search(int a[100],int num,int n)
{
  int i;
 for(i=0;i<n;i++)
{
  if(a[i]==num)
 {
  return i;
}
}
  return -1;
}

