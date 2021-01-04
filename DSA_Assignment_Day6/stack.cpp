#include<stdio.h>
int top=-1,n=6,count=0,arr[50],i;
void display();
void push(int a);
void pop();
int minimum();
int maximum();
main()
{ 
    push(20);
    push(30);
    push(40);
    push(50);
    push(10);
    push(90);
    push(110);
    printf("\nyour stack");
	display();
    printf("\n   maximum number : %d", maximum());
    printf("\n   minimum number : %d",minimum());
    pop();
    printf("\nyour stack :  ");
	display();
	printf("\n   maximum number : %d", maximum());
    printf("\n   minimum number : %d",minimum());
    pop();
    printf("\nyour stack : " );
	display();
    printf("\n   maximum number : %d", maximum());
    printf("\n   minimum number : %d",minimum());
    pop();
    printf("\nyour stack :");
    display();
    printf("\n   maximum number : %d", maximum());
    printf("\n   minimum number : %d",minimum());
    pop();
    display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
}
void push(int a)
{   
if(top==n-1)
{
printf("\nstack over flow");
return;
}
 arr[++top]=a;	
}
void pop()
{   
	if(top==-1)
	{
	printf("\nstack underflow");
    return ;
	    }
		printf("\nnumber popped is : %d ",arr[top--]);
		printf("\n%d time poped ",++count);

}
void display()
{ if(top==-1)
   printf("\n no elements to be displayed");
     for(i=top;i>=0;i--)
  printf("\n%d",arr[i]);
}
int minimum()
{ int min=arr[0];
for(i=1;i<top+1;i++)
   {
	if(min>arr[i])
	min=arr[i];
   }
   return min;
}
int maximum()
{   int max=arr[0];
	for(i=1;i<top+1;i++)
	{
		if(max<arr[i])
			max=arr[i];		
	}
	return max;
}
