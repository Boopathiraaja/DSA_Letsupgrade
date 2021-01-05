#include<stdio.h>
int top=-1,top1=-1,arr[20],arr1[20],n,i,j;
void push(int x);
void pop();
void display();
main()
{
	printf("enter size of stack : ");
	scanf("%d",&n);
	push(110);
	push(20);
	push(30);
	push(40);
	push(5);
	push(100);
	push(130);
	push(80);
	printf("\nyour array : ");
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();	
	display();
}
void push(int x)
{
	if(top==n-1 && top1==n-1)
	{
		printf("\nstack overflow ");
		return;
	}
	else
	{
	  arr[++top]=x;
	  arr1[++top1]=x;
	  if(top1>0)
	  {
	  	if(arr1[top1-1]>arr1[top1])
	  	arr1[top1-1]=arr1[top1];
		else
		arr1[top1]=arr1[top1-1];	  	
		  }	
	}
}
void pop()
{
	if(top==-1 && top1==-1)
	printf("\nstack underflow");
	else
	{
	  printf("\nvalues popped in original : %d  \nvalues popped in duplicate : %d ",arr[top--],arr1[top1--]);
	}
}
void display()
{
	if(top==-1 && top1==-1)
	{
		printf("\nno elements to be displayed ");
	}
	else
	{   
		for(i=top,j=top1;i>=0,j>=0;i--,j--)
		{
			printf("\n%d---------%d",arr[i],arr1[j]);
		}
		printf("\nminimum number : %d\n",arr1[top1]);		
	}
}
