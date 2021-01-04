#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
	int number;
	struct linked_list *next;
};
#define NULL 0
typedef struct linked_list node;
node *deleted(node *head,int key);
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
	printf("\nLinked list before deletion : ");
	print(head);
	printf("\n Number of heads : %d ",count(head));
	printf("\nEnter the key node to be deleted : ");
	scanf("%d",&key);
	deleted(head,key);
	printf("\nLinked list after deletion : ");
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
node *deleted(node *head,int key)
{
	node *temp;
	node *n1;
	if(head->number==key)
	{
		temp=head->next;
		free(head);
		head=temp;
	}
	
	else
	{
		n1=find(head,key);
		if(n1==NULL)
		printf("\nkey node is not found ");
        else
		{
			temp=n1->next->next;
			free(n1->next);
			n1->next=temp;
		}				
	}return(head);
}
