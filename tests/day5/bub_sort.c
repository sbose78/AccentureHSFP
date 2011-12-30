#include<stdio.h>

void swap(int *a,int *b)
{
	int *temp=*b;
	*b=*a;
	*a=temp;

}
int main()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
		
	int i,j,n=10;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j+1]<arr[j])
			{
	//			swap(&arr[j+1],&arr[j]);
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp; 
			}
		}
	}
	for(i=0;i<n;i++) printf("\n%d",arr[i]);
			
}
