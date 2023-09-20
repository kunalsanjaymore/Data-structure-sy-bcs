#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next,*prev;
}NODE;

NODE *create(NODE *list)
{
	int i,n;
	NODE *temp,*newnode;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		printf("enter value");
		scanf("%d",&newnode->data);
		if(list==NULL)
		{
			list=temp=newnode;
			newnode->next=list;
			list->prev=newnode;
			
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
			newnode->next=list;
			list->prev=newnode;
		}
		
		
	}
	return list;
	
	
}
void disp(NODE *list)
{
	NODE *temp;
	temp=list;
	do
	{
		printf("%d",temp->data);
		temp=temp->next;
		
	}while(temp!=list);
}

NODE *insertbeg(NODE *list,int num)
{
	NODE *newnode,*temp;
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->data=num;
	for(temp=list;temp->next!=list;temp=temp->next);
	newnode->next=list;
	list->prev=newnode;
	list=newnode;
	newnode->next=list;
	list->prev=newnode;
	return list;
	
	
}
NODE *insertmid(NODE *list,int pos,int num)
{
	NODE *temp,*newnode;
	int i;
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->data=num;
	for(i=1,temp=list;i<pos-1&&temp->next!=list;temp=temp->next,i++);
	newnode->next=temp->next;
	temp->next->prev=newnode;
	temp->next=newnode;
	newnode->prev=temp;
	return list;
}









int main()
{
	int ch,num,pos;
	NODE *list=NULL;
	
	do
	{
		printf("\n1-create \n2-disp \n3-insertbeg \n4-insertmid");
		printf("\nenter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:list=create(list);
			         break;
			  case 2:disp(list);
			           break;
				case 3:printf("enter number");
				       scanf("%d",&num);
				list=insertbeg(list,num);
				          break;
				  case 4:printf("enter number");
				         scanf("%d",&num);
						 printf("enter position");
						 scanf("%d",&pos); 
						 list=insertmid(list,pos,num);
						 break;       
				default:printf("Invalid choice");
						  	          
		}
	}while(ch<5);
}