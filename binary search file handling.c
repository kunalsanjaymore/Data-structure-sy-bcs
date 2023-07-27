#include<stdio.h>
#include<stdlib.h>

int main()
{
  int flag=0,scode,top,mid,bottom;
  char cname[20],s1[20];
 
  FILE *fp1;
  fp1=fopen("sortedcities.txt","r");
  if(fp1==NULL)
{
 printf("file is not found");
 exit(0);
}
 printf("enter city name to serach");
 scanf("%s",&s1);
while(!feof(fp1))
{
  fscanf(fp1,"%s%d",&cname,&scode);
  top=0;
 bottom=n-1;
 while(top<=bottom)
{
  mid=(top+bottom)/2;
  if(strcmp(cname,s1)==0)
 {
   flag=1;
    break;
}
 if(strcmp(s1,))
 top=mid+1;
else
bottom=mid-1;
}
if(flag==1);
printf("city found std code=%d",scode);
else
printf("city is not list");
fclose(fp1);
}
   
