#include<stdio.h>
#include<string.h>
#define MAX 7

struct stack
{
  char s2[20][20];
  int top;
}s1;

 void init()
{
  s1.top=-1;
}

 int isempty()
{
  if(s1.top==-1)
    return 1;
  else
   return 0;
}

int isfull()
{
  if(s1.top==MAX-1)
    return 1;
  else
   return 0;
}
  void push(char name[30])
{
  if(isfull())
 printf("stack is full don't push");
else
{
  s1.top++;
  strcpy(s1.s2[s1.top],name);
  printf("push successfully...");
}
}
 
  void pop()
{
   char k[30];
   if(isempty())
  printf("stack is empty don't pop");
 else
{
  strcpy(k,s1.s2[s1.top]);
  s1.top--;
 printf("\npoped value=%s",k);
}
}
  void disp()
{
  int i;
  for(i=s1.top;i>=0;i--)
{
   printf("%s\t",s1.s2[i]);
}
}

  int main()
{
  int ch;
  char name[30];
 init();

do
{
  printf("\n 1-push \n2-pop \n3-display\n");
  printf("enter choice");
  scanf("%d",&ch);
  switch(ch)
{
  case 1:printf("enter name");
         scanf("%s",name);
        push(name);
       break;
    case 2:pop();
           break;
   case 3:disp();
	  break;
    default:printf("invalid choice");
       }
}while(ch<4);
}