#include<stdlib.h>
#include<stdio.h>

struct node
{
  int data;
 struct node *next;
};

struct node *create(struct node *head)
{
  int i,n;
  struct node *newnode,*temp;
 printf("enter limit");
 scanf("%d",&n);
for(i=1;i<n;i++)
{
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("enter value");
 scanf("%d",&newnode->data);
 newnode->next=NULL;
 if(head==NULL)
{
 head=temp=newnode;
}
else
{
 temp->next=newnode;
temp=newnode;
}
}
return head;
}
 void disp(struct node *head)
{
 struct node *temp=head;
 while(temp!=NULL)
{
  printf("%d",temp->data);
  temp=temp->next;
}
}
struct node *insertbeg(struct node *head,int num)
{
 struct node *newnode;
 newnode=(struct node *)malloc(sizeof(struct node));
 newnode->data=num;
 newnode->next=head;
 head=newnode;
 return head;
}
struct node *insertend(struct node *head,int num)
{
  struct node *newnode,*temp;
  newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=num;
 newnode->next=NULL;
 for(temp=head;temp->next!=NULL;temp=temp->next);
 temp->next=newnode;
 
  return head;
}
 struct node *insertmid(struct node *head,int pos,int num)
{
 struct node *newnode,*temp;
 int i;
  newnode=(struct node *)malloc(sizeof(struct node));
 newnode->data=num;
 for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
 newnode->next=temp->next;
 temp->next=newnode;
  return head;
}

  struct node *deletebeg(struct node *head)
{
 struct node *temp;
  temp=head;
  head=head->next;
  free(temp);
 return head;
}

 struct node *deleteend(struct node *head)
{
  struct node *temp,*temp1;
 for(temp=head;temp->next->next!=NULL;temp=temp->next);
  temp1=temp->next;

 temp->next=NULL;
free(temp1);
 return head;
}
struct node *deletemid(struct node *head,int pos)
{
  struct node *temp,*temp1;
  int i;
 for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;temp=temp->next,i++);
  temp1=temp->next;
  temp->next=temp1->next;
 free(temp1);
 return head;
}


  int main()
{
  int ch,pos,num;
 struct node *head=NULL;
 do
{
  printf("\n1-create\n2-disp\n3-insertbeg\n4-insertend\n5-insertmid\n6-deletebeg\n7-deleteend\n8-deletemid");
 printf("\nenter choice");
  scanf("%d",&ch);
 switch(ch)
{
 case 1:head=create(head);
        break;
  case 2:disp(head);
         break;
 case 3:printf("enter number:");
        scanf("%d",&num);
       head=insertbeg(head,num);
      break;
 case 4:printf("enter number");
         scanf("%d",&num);
        head=insertend(head,num);
        break;
  case 5:printf("enter number");
          scanf("%d",&num);
        printf("enter pos");
       scanf("%d",&pos);
     head=insertmid(head,pos,num);
   break;
 case 6:head=deletebeg(head);
          break;
 case 7:head=deleteend(head);
        break;
 case 8:printf("enter pos");
        scanf("%d",&pos);
        head=deletemid(head,pos);
        break;
 default:printf("invalid choice");
 }
}while(ch<9);
} 
 
