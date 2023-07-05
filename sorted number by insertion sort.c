#include<stdio.h>
 int main()
{
  int a[100],i,j,n,num,t;
 printf("enter limit");
 scanf("%d",&n);

printf("enter n number");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
{
  num=a[i];
 for(j=i-1;j>=0&&num<=a[j];j--)
{
  t=a[j+1];
  a[j+1]=a[j];
  a[j]=t;
}
  printf("\n sorted no=");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
}
