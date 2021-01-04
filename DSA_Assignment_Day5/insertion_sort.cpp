#include<stdio.h>
int insertion_sort(int arr[],int n);
int main()
{
	int i,n;
	printf("enter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("\nenter the number : ");
		scanf("%d",&arr[i]);
	}
	printf("\n----------------------Before---Sorting-------------------");
	for(i=0;i<n;i++)
	printf("\n%d",arr[i]);
	insertion_sort(arr,n);
	printf("\n----------------------After---Sorting---------------------");
	for(i=0;i<n;i++)
	printf("\n%d",arr[i]);
}
int insertion_sort(int arr[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
