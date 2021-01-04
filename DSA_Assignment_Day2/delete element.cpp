#include<stdio.h>
int del(int arr[],int n,int num);
int main()
{   int i,num;    
	int arr[6]={1,2,3,4,5,6};
	int len= (sizeof(arr))/sizeof(arr[0]);
	printf("\nyour array : ");
	for(i=0;i<len;i++)
     	printf("\n %d",arr[i]);
    printf("\nEnter the Number to be deleted :");
    scanf("%d",&num);
	del(arr,len,num);
	}
int del(int arr[],int n , int num)
{   int i,pos,count=0;
    for(i=0;i<n;i++)
    if(arr[i]==num)
       pos=i;
	for(i=pos;i<n;i++)
	   arr[i]=arr[i+1];	
	n=n-1;
	printf("Modified Array :");
	for(i=0;i<n;i++)
	    printf("\n%d",arr[i]);
}
