#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *create(NODE *list)
{
	NODE *newnode,*temp;
	int i,n;
	printf("enter limit");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		printf("enter value");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		
		if(list==NULL)
		{
			list=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
			
		}
	
	}
	return list;
}



void disp(NODE *list)
{
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("%d",temp->data);
	}
}


NODE *insertbeg(NODE *list,int num)
{
	NODE *newnode;
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->data=num;
	newnode->next=list;
	list=newnode;
	return list;
}

NODE *insertmid(NODE *list,int num,int pos)
{
	NODE *newnode,*temp;
	int i;
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->data=num;
	for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;temp=temp->next,i++)
	newnode->next=temp->next;
	temp->next=newnode;
	return list;
}

NODE *insertend(NODE *list,int num)
{
	NODE *newnode,*temp;
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->data=num;
	newnode->next=NULL;
	for(temp=list;temp!=NULL;temp=temp->next);
	temp->next=newnode;
	return list;
}


NODE *delbeg(NODE *list)
{
	NODE *temp;
	temp=list;
	list=list->next;
	free(temp);
	return list;
}

NODE *delmid(NODE *list,int pos)
{
	NODE *temp,*temp1;
	int i;
	for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;temp=temp->next,i++);
	temp1=temp->next;
	temp->next=temp1->next;
	free(temp1);
	return list;
}

NODE *delend(NODE *list)
{
	NODE *temp,*temp1;
	for(temp=list;temp->next->next!=NULL;temp=temp->next);
	temp1=temp->next;
	temp->next=NULL;
	free(temp1);
	return list;
}



NODE *insert(NODE *list,int num,int pos)
{
	NODE *newnode,*temp;
	int i;
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->data=num;
	if(pos==1)
	{
		newnode->next=list;
		list=newnode;
	}
	else
	{
		for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;temp=temp->next,i++);
		newnode->next=temp->next;
		temp->next=newnode;
	}
	return list;
}

NODE  *search(NODE *list,int num)
{
	NODE *temp;
	int i,flag=0;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		if(temp->data==num)
	{
	
	flag=1;
	break;
}
}
if(flag==1)
printf("data found=%d",i);
else
printf("data not found");

}





int main()
{
	NODE *list=NULL;
	int ch,num,pos;
	
	do
	{
		printf("\n1-create \n2-disp \n3-insertbeg \n4-insertmid \n5-insertend");
		printf("\n6-delbeg \n7-delmid \n8-delend \n9-insert \n10-search \n11-enter choice");
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
					list=insertmid(list,num,pos);
					break;
			case 5:printf("enter number");
			       scanf("%d",&num);
				   list=insertend(list,num);
				   break;
			case 6:list=delbeg(list);
			        break;
			case 7:printf("enter positon");
			        scanf("%d",&pos);
					list=delmid(list,pos);
					break;
			case 8:list=delend(list);
			       break;
			case 9:printf("enter number");
			        scanf("%d",&num);
					printf("enter position");
					scanf("%d",&pos);
					list=insert(list,num,pos);
					break;
			case 10:printf("enter number");
			        scanf("%d",&num);
				    	list=search(list,num);
					break;			   					   			   		         
		}
	}while(ch<11);
}