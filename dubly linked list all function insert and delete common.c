#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
 struct node *next,*prev;
}node;

 struct node *create(struct node *list)
{
 int i,n;
 struct node *newnode,*temp;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter value");
 scanf("%d",&newnode->data);
  newnode->next=NULL;
 if(list==NULL)
{
  list=newnode;
  temp=newnode;
}
else
{
 temp->next=newnode;
 newnode->prev=temp;
 temp=newnode;
}
}
return list;
}
 void disp(struct node *list)
{
 struct node *temp;
 for(temp=list;temp!=NULL;temp=temp->next)
{
 printf("%d",temp->data);
}
}
struct node* insertbeg(struct node *list,int num)
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=list;
list->prev=newnode;
 list=newnode;
 return list;
}
struct node* insertend(struct node* list,int num)
{
  struct node *newnode,*temp;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  newnode->next=NULL;
  for(temp=list;temp->next!=NULL;temp=temp->next);
  temp->next=newnode;
  newnode->prev=temp;
  return list;
}
struct node* insertmid(struct node *list,int pos,int num)
{
  struct node *newnode,*temp;
  int i;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=num;
 for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
 newnode->next=temp->next;
 temp->next->prev=newnode;
 temp->next=newnode;
 newnode->prev=newnode;
 return list;
}
struct node* delbeg(struct node *list)
{
  struct node *temp;
 temp=list;
 list=list->next;
 free(temp);
 return list;
}
struct node* delend(struct node *list)
{
  struct node *temp,*temp1;
  for(temp=list;temp->next->next!=NULL;temp=temp->next);
  temp1=temp->next;
 temp->next=NULL;
 free(temp1);
 return list;
}
struct node* delmid(struct node *list,int pos)
{
  struct node *temp,*temp1;
   int i;
 for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
 temp1=temp->next;
 temp->next=temp1->next;
 temp1->next->prev=temp;
 free(temp1);
 return list;
}

struct node *insert(struct node *list,int num,int pos)
{
	struct node *temp,*newnode;
	 int i;
	 newnode=(struct node *)malloc(sizeof(struct node));
	 newnode->data=num;
	 if(pos==1)
	 {
	 	newnode->next=list;
	 	list->prev=newnode;
	 	list=newnode;
	 }
	 else
	 {
	 	for(i=1,temp=list;i<pos-1&&temp!=NULL;temp=temp->next,i++);
	 	newnode->next=temp->next;
	 	temp->next=newnode;
	 	newnode->prev=temp;
	 	
	 }
	 return list;
	 
}

struct node *del(struct node *list,int pos)
{
	int i;
	struct node *temp,*temp1;
	if(pos==1)
	{
		temp=list;
		list=list->next;
		free(temp);
		
		
	}
	else
	{
		for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;temp=temp->next,i++);
		temp1=temp->next;
		temp->next=temp1->next;
		temp1->next->prev=temp;
		free(temp1);
		
	}
	return list;
}











int main()
{
 int ch,num,pos;
 struct node *list=NULL;
 do
{
 printf("\n1-create \n2-display \n3-insertbeg \n4-insertend \n5-insertmid \n6-delbeg \n7-delend \n8-delmid");
 printf("\n9-insert \n10-delete     \n enter choice");
 scanf("%d",&ch);
 switch(ch)
{
 case 1:list=create(NULL);
         break;
 case 2:disp(list);
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
 case 6:list=delbeg(list);
           break;
 case 7:list=delend(list);
        break;
 case 8:printf("enter position");
          scanf("%d",&pos);
      list=delmid(list,pos);
      break;
 case 9:printf("enter number");
          scanf("%d",&num);
          printf("enter position");
          scanf("%d",&pos);
          list=insert(list,num,pos);
          break;
   case 10:printf("enter position");
             scanf("%d",&pos);
			 list=del(list,pos);
			 break;       
 }
}while(ch<11);
}
 

 

