#include<stdio.h>
int a[20],n;
 
int quicksort(int a[],int s,int e)
{
  int pivot,next,prev,temp;
  pivot=a[s];
  next=s+1;
  prev=e;
 
do
{
 while((a[next]<pivot)&&(next<=e))
{
  next++;
}
while((a[prev]>pivot)&&(prev>s))
{
 prev--;
}
if(next<prev)
{
  temp=a[prev];
  a[prev]=a[next];
   a[next]=temp;
}
}while(next<prev);
 a[s]=a[prev];
  a[prev]=pivot;
   return prev;
}
void divide(int a[],int s,int e)
{
   int pos;
  if(s<e)
{
  pos=quicksort(a,s,e);
  divide(a,s,pos-1);
   divide(a,pos+1,e);
 }
}

int main()
{
 int i,a[20],n;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n number");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 divide(a,0,n-1);

 printf("\n sorted no=");
 for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
}
}