#define MAX 100

struct stack
{
  char a[MAX];
  int top;
}*s1;

 void init()
{
  s1->top=-1;
}

  int isfull()
{
  if(s1->top==MAX-1)
   return 1;
  else
   return 0;
}
int isempty()
{
  if(s1->top=-1)
 return 1;
 else
  return 0;
}
 void push(char ch)
{
 if(isfull())
 printf("stack is full don't push");
 else
  {
    s1->top++;
   s1->a[s1->top]=ch;
}
}
}
  char pop()
{
  char ch;
  if(isempty())
 printf("stack is empty don't pop");
else
{
  ch=s1->a[s1->top];
  s1->top--;
  return ch;
}
}

  int main()
{
  char s[20];
  int i;
 
 printf("enter string");
 scanf("%s"&s);
 init();
 for(i=0;s[i]!='\0';i++)
{
  push(s[i]);
}
 for(i=0;s[i]!='\0';i++)
{
  if(s[i]!=pop())
{
 break;
}
 }
  if(isempty())
 printf("\nstring is pailndrome");
else
 printf("string is not pailndrome");
}