#include<stdio.h>
main()
{
	int arr[20],n,i,a,count=0,b=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		a=arr[i];
		while(a==0)
		{ 
			a=a/10;
			count++;
			
		}
		b*=a;
	}
	printf("%d",b);
	for(i=0;i<count;i++)
		printf("0");
	
}
