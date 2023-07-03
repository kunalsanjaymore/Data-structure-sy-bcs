#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int rno;
        char name[20];
        int per;
    }s1[100],t;
    int i,n,pass;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter n stduent info");
    for(i=0;i<n;i++)
    {
        printf("enter rno name per:");
        scanf("%d%s%d",&s1[i].rno,&s1[i].name,&s1[i].per);
    }
    for(pass=1;pass<n;pass++)
    {
        for(i=0;i<n-pass;i++)
        {
            if(strcmp(s1[i].name,s1[i+1].name)<0)
                {
                    t=s1[i];
                    s1[i]=s1[i+1];
                    s1[i+1]=t;
                }
            }
        }
        printf("sorted order name=");
        for(i=0;i<n;i++)
        {
            printf("%d%s%d",s1[i].rno,s1[i].name,s1[i].per);
        }
    }
