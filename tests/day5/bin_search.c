
#include<stdio.h>

int search(int a[15],int n,int key)
{
	int loc=-1,ul=n-1,ll=0;
	while(ul>0 && ll<n)
	{
		int mid=(ul+ll)/2;

		if(a[mid]==key) 
		{
			loc=mid;
			break;
		}
		else if(key>a[mid])
		{
			ll=mid+1;
		}
		else 
		{
			ul=mid-1; 
		}
	}
	return loc;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10},n=10,key=4;
	
       //search(array,length of the array,search-key)

	int loc=search(arr,n,key);
	printf("%d",loc);
}

