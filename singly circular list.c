#include<stdio.h>
#include<string.h>
#include<malloc.h>
 struct node 
 {
 
 int data;
  struct node *next;
};

struct node *create(struct node *list)
{
 struct node *temp,*newnode;
 int i,n;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("enter value");
 scanf("%d",&newnode->data);
 if(list==NULL)
{
 list=temp=newnode;
 newnode->next=list;
}
else
{
  temp->next=newnode;
 newnode->next=list;
 temp=newnode;
}
}
return list;
}


void display(struct node *list)
{
 struct node *temp=list;
 
do
{
  printf("%d",temp->data);
 temp=temp->next;
 }while(temp!=list);
}

struct node *insertbeg(struct node *list,int num)
{
  struct node *temp,*newnode;
 newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=num;
 for(temp=list;temp->next!=list;temp=temp->next);
 newnode->next=list;
 list=newnode;
 temp->next=list;
 return list;
}

struct node *insertend(struct node *list,int num)
{
  struct node *newnode,*temp;
 newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=num;
 
 for(temp=list;temp->next!=list;temp=temp->next);
  newnode->next=list;
 temp->next=newnode;
 
 return list;
}

struct node *insertmid(struct node *list,int num,int pos)
{
	 struct node *newnode,*temp;
	  int i;
	  newnode=(struct node *)malloc(sizeof(struct node));
	  newnode->data=num;
	  for(i=1,temp=list;temp->next!=list && i<pos-1;i++,temp=temp->next);
	  newnode->next=temp->next;
	  temp->next=newnode;
	  return list;
}












int main()
{
 struct node *list=NULL;
 int ch,num,pos;
do
{
 printf("\n1-create \n2-display \n3-insertbeg \n4-insertend \n5-insertmid");
 printf("\nenter choice");
 scanf("%d",&ch);
 switch(ch)
{
 case 1:list=create(list);
         break;
 case 2:display(list);
        break;
 case 3:printf("enter number");
        scanf("%d",&num);
       list=insertbeg(list,num);
        break;
case 4:printf("enter number");
       scanf("%d",&num);
      list=insertend(list,num);
      break;
 case 5:printf("enter number");
       scanf("%d",&num);
       printf("enter position");
       scanf("%d",&pos);
       list=insertmid(list,num,pos);
       break;
      
}
}while(ch<6);
}
 