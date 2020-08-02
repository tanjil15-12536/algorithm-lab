#include <stdio.h>

int main(){
	int n,i,j;
	scanf("%d", &n);
	int arr[n];
	int arr1[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		arr1[i] = arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			int temp;
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr1[j] == arr[i])
			{
				printf("%d ",j);
				break;
			}
		}
	}
}
