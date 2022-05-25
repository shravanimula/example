#include<stdio.h>
#define SIZE 100
void print(int *arr,int n)
{
	int i;
	printf("array elements are:");
	for(i=0;i<n;i++)
	{
		printf("array[%d]=%d\t",i,*(arr+i));
	}
}
int main()
{
	int arr[SIZE];
	int i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print(arr,n);
}
