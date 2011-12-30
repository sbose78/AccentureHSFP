#include<stdio.h>
#include<values.h>

int main()
{

	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int min=arr[1],min_index=-1,i,j,n=10;
	

	for(i=0;i<n-1;i++)
	{	min=arr[i+1];
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<min)
			{    	
				min=arr[j];
				min_index=j;
			}
		}
		if(arr[i]>min) 
		{	printf("\n SWAPPING");
			int temp=arr[i];
			arr[i]=arr[min_index];
			arr[min_index]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
}
