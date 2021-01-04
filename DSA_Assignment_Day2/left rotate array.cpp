#include<stdio.h>
int rotate(int arr[],int len,int rot);
int main()
{
	int len,rot,i;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	len=sizeof(arr)/sizeof(arr[0]);
	printf("Your Array : ");
	for(i=0;i<len;i++)
	printf("\n%d",arr[i]);
	printf("\nEnter the Number of Rotation : ");
	scanf("%d",&rot);
	rotate(arr,len,rot);	
}
int rotate(int arr[],int len,int rot)
{   int first,i,j;
	for(i=0;i<rot;i++)
	{   first=arr[0];
		for(j=1;j<len;j++)
		{
			arr[j-1]=arr[j];
		}
		arr[len-1]=first;			
	}
	for(i=0;i<len;i++)
	printf("\n%d",arr[i]);
}
