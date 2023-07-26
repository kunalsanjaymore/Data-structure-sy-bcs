#include<stdlib.h>
#include<stdio.h>
int main()
{
  FILE *fp1;
 int num;
 
 fp1=fopen("number.txt","r");
 
 if(fp1==NULL)
{
  printf("file is not found");
  exit(0);
}
while(!feof(fp1))
{
  fscanf(fp1,"%d",&num);
  printf("%d\n",num);
}
fclose(fp1);
}
