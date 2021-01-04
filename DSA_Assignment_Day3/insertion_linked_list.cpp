#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
	int number;
	struct linked_list *next;
};
#define NULL 0
typedef struct linked_list node;
node *insert(node *head,int key,int x);
int create(node *head);
node *find(node *head,int key);
int print(node *head);
int count(node *head);
int main()
{
	node *head;
	int key,x;
	head=(node*)malloc(sizeof(node));
	create(head);	
	printf("\nLinked list before insertion : ");
	print(head);
	printf("\n Number of heads : %d ",count(head));
	printf("\nEnter the key node : ");
	scanf("%d",&key);
	printf("\nEnter number to be inserted : ");
	scanf("%d",&x);
	insert(head,key,x);
	printf("\nLinked list after insertion : ");
	print(head);
	printf("\n Number of heads : %d",count(head));
}
int create(node*head)
{  
	printf("\nEnter the number (-101 to end) : ");
	scanf("%d",&head->number);
	if(head->number==-101)
	{
		head->next=NULL;
	}
	else
	{
		head->next=(node*)malloc(sizeof(node));
	    create(head->next);
	}
	
}
int print(node *head)
{
	if(head->next!=NULL)
    {

		printf("-> %d ",head->number);
		if(head->next->next==NULL)
		printf("-> %d ",head->next->number);
	    print(head->next);
	}
	}
int count(node *head)
{
	if(head->next==NULL)
	return 0;
	else
	return 1+count(head->next);
}
node *insert(node *head, int key,int x)
{   
	node *new1;
    node *n1;
	if(head->number==key)
	{
	    new1=(node *)malloc(sizeof(node));
		new1->number=x;
		new1->next=head;
		head=new1;
	}
	else
	{ n1=find(head,key);
	  if(n1==NULL)
	  printf("\nkey node is not found");
	  else
	  {
	  	new1=(node *)malloc(sizeof(node));
	  	new1->number=x;
	  	new1->next=n1->next;
	  	n1->next=new1;
	  }
	}return (head);
}
node *find(node *head,int key)
{
	if(head->next->number==key)
	return head;
	else
	{
		if(head->next->next==NULL)
		return NULL;
		else
		find(head->next,key);
	}
}
