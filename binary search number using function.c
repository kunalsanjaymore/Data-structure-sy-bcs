#include<stdio.h>
int main()
{
 int a[100],i,n,num;
void binary(int a[100],int n,int num);
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("enter number to search");
scanf("%d",&num);
binary(a,n,num);
}
void binary(int a[100],int n,int num)
{
 int flag=0,top,mid,bottom,i;
for(i=0;i<n;i++)
 

top=0;
bottom=n-1;
while(top<=bottom)
{
 mid=(top+bottom)/2;
 if(a[mid]==num)
{
 flag=1;
 break;
}
if(num>=a[mid])
top=mid+1;
else
 bottom=mid-1;
}
if(flag==1)
printf("number is found");
 else
printf("number is not found");
}