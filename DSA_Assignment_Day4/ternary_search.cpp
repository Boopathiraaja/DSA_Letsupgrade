#include<stdio.h>
int ternary_search(int a,int b,int arr[],int key);
int main()
{
	int key,n,a,b,i;
	printf("\nEnter number of elements : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("\nenter your number : ");
		scanf("%d",&arr[i]);
	}
	printf("\nYour Array ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	printf("\n Enter Number to be found : ");
	scanf("%d",&key);
	a=0;
	b=n-1;
	printf("\nYour Number in the position : %d ",ternary_search(a,b,arr,key));
}
int ternary_search(int a,int b,int arr[],int key)
{
	int mid1,mid2,n;
	n=sizeof(arr)/sizeof(arr[0]);
	mid1=a+(b-a)/3;
	mid2=b-(b-a)/3;
	if(key==arr[mid1])
	return mid1;
	else if(key==arr[mid2])
	return mid2;
	else
	{
		if(key<mid1 && key<mid2)
		{ a=0;
		  b=mid1-1;
		  return ternary_search(a,b,arr,key);
		}
		
		else if(key>mid1 && key>mid2)
		{
			a=mid2+1;
			b=n-1;
			return ternary_search(a,b,arr,key);
		}
		else
		{
			a=mid1+1;
			b=mid2-1;
			return ternary_search(a,b,arr,key);
		}
	}
}
