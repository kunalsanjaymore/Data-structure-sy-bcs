#include<stdio.h>
struct name
{
	char name[20];
	 
}s[100],t;
void bubble(struct name s[100],int n)
{
  int i,pass;
  printf("enter name sort");
  for(pass=1;pass<n;pass++)
{
 for(i=0;i<n-pass;i++)
{
 if(strcmp(s[i].name,s[i+1].name)>0)
{
 t=s[i];
 s[i]=s[i+1];
 s[i+1]=t;
}
}
}
printf("sorted name=");
 for(i=0;i<n;i++)
{
 printf("%s\t",s[i].name);
}
}

int main()
{
 int i,n;
  
 void bubble(struct name s[100],int n);
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n name");
 for(i=0;i<n;i++)
{
 scanf("%s",&s[i]);
}
 bubble(s,n);
}
 