#include<stdio.h>
void enqueue(int x);
void dequeue();
void display();
int x,i,f=-1,r=-1,arr[40],n;
main()
{
	printf("\n Enter the Number of elements : ");
	scanf("%d",&n);
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	enqueue(70);
	enqueue(80);
	display();
	dequeue();
	display();
	dequeue();
	display();
	dequeue();
	display();
	dequeue();
	display();
	dequeue();
	display();
	dequeue();
	display();
	dequeue();
	display();
	}
void enqueue(int x)
{
	if(f==(r+1)%n)
	{
		printf("\nqueue overflow ");
		return;
	}
	if(f==-1)
    {
	f=0;
	r=0;
}
	else
	r++;
	arr[r]=x;
 } 
 void dequeue()
 {
 	if(f==-1)
 	{
 		printf("\nqueue underflow");
 		return;
	 }
	 x=arr[f];
	 if(f==r)
	 {
	 	f=r=-1;
	 }
	 else
	 f++;
	 printf("\nnumber deleted : %d ",x);
 }
 void display()
 {
 	if(f==-1)
 	{
 		printf("\n no elements to be displayed");
 		return;
	 }
	 for(i=f;i<=r;i++)
	 {
	 	printf("\n%d",arr[i]);
	 }
 }
