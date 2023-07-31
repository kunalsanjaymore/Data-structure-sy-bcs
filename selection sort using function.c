#include<stdio.h>
int main()
{
  int i,n,a[100][100];
  void selection(int a[100][100],int n);
  printf("enter limit");
  scanf("%d",&n);
 printf("enter n name");
 for(i=0;i<n;i++)
{
 
scanf("%s",&a[i]);
}
selection(a,n);
}
void selection(int a[100][100],int n)
{
  int j,index,min[100],t[100],i;
 for(i=0;i<n;i++)
{

 strcpy(min,a[i]);
 index=i;
 for(j=i+1;j<n;j++)
{
 if(strcmp(a[j],min)<0)
 {
   strcpy(min,a[i]);
   index=j;
}
}
strcpy(t,a[i]);
strcpy(a[i],a[index]);
strcpy(a[index],t);
}
printf("sroted name=");
for(i=0;i<n;i++)
printf("%s\t",a[i]);
}
 