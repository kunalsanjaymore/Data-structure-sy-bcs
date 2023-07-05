#include<stdio.h>

int main()
{
  int a[100],i,n,ch;
  void insertion(int a[100],int n);
  void bubble(int a[100],int n);
  void selection(int a[100],int n);
  void linear_search(int a[100],int num,int n);

 
  printf("enter limit");
  scanf("%d",&n);
  printf("enter n number");
  for(i=0;i<n;i++)
 scanf("%d",&a[i]);
do
{
  printf("\n 1-insertion \n2-bubble \n3-selection \n4-search \n enter choice");
  scanf("%d",&ch);
  switch(ch)
{
  case 1:insertion(a,n);
         break;
  case2:bubble(a,n);
        break;
  case 3:selection(a,n);
          break;
  case 4:printf("enter number to search");
         scanf("%d",&num);
         linear_search(a,num,n);
          break;
  default:printf("invalid choice");
}
}while(ch<5);
}
  void insertion(int a[100],int n)
{
  int i,j,t,num;
 for(i=0;i<n;i++)
{
  num=a[i];
  for(j=i-1;j>=0&&num<=a[j];j--)
{
  t=a[j+1];
  a[j+1]=a[j];
  a[j]=t;
}
  printf("\n sorted number");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
  void bubble(int a[100],int n)
 {
   int pass,i,t;
   for(pass=1;pass<n;pass++)
{
  for(i=0;i<n-pass;i++)
{
   if(a[i]>a[i+1])
{
  t=a[i];
  a[i+1]=a[i];
  a[i]=t;
}
}
}
 printf("\n bubble sort no=");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
  void selection(int a[100],int n)
{
  int i,j,index,min,t;
  for(i=0;i<n;i++)
{
  min=a[i];
  index=i;
  for(j=i+1;j<n;j++)
{
  if(a[j]<min)
{
  min=a[j];
  index=j;
}
}
 t=a[i];
a[i]=a[index];
 a[index]=t;
}
 printf("\n selection sort=");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
  void linear_search(int a[100],int num,int n)
{
  int i,flag=0;
 for(i=0;i<n;i++)
{
  if(a[i]==num)
{
  flag=1;
  break;
}
}
 if(flag==1)
  printf("number is found.....");
  else
  printf("number is not found....");
}
 