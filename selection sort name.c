#include<stdio.h>
int main()
{
 int a[100][100],t[100],min[100];
 int i,j,n,index;
  printf("enter limit");
 scanf("%d",&n);
 printf("enter n name");
 for(i=0;i<n;i++)
 scanf("%s",&a[i]);

  for(i=0;i<n;i++)
{
  strcpy(min,a[i]);
  index=i;
 for(i=0;i<n;i++)
{
 if(strcmp(a[j],min)<0)
 {
   strcpy(min,a[j]);
   index=j;
}
}
 strcpy(t,a[i]);
 strcpy(a[i],a[index]);
 strcpy(a[index],t);
}
printf("sorted name=");
 for(i=0;i<n;i++)
{
 printf("%s\t",a[i]);
}
}

