#include<stdio.h>
  

int main()
{
  int n,i,j,index;
  char s1[100][100],t[20],min[20];
  
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n name");
 
 for(i=0;i<n;i++)
  scanf("%s",&s1[i]);
for(i=0;i<n;i++)
{
  strcpy(min,s1[i]);
  index=i;
for(j=i;j<n;j++)
{
  if(strcmp(s1[j],min)<0)
{
  strcpy(min,s1[j]);
  index=j;
 }
}
 strcpy(t,s1[i]);
 strcpy(s1[i],s1[index]);
 strcpy(s1[index],t);
}
printf("\n sorted name=");
for(i=0;i<n;i++)
printf("%s\t",s1[i]);
}
    