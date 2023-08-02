#include<stdio.h>
int main()
{
 int a[100],n,i,num;
 void search(int a[100],int n,int num);
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
 a[i]=rand()%100;
}
printf("random number");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("enter number to search");
scanf("%d",&num);

search(a,n,num);
}
 void search(int a[100],int n,int num)
{
 int i;
 
for(i=0;i<n;i++)
{
 if(a[i]==num)
 break;
}
if(i==n)
printf("not found");
else
printf("found=%d",i);
}