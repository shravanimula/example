#include <stdio.h>
#define SIZE 50
void Printsum(int (*)[],int n);
int main()
{
	int arr[SIZE],n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	Printsum(&arr,n);
	return 0;
}
void Printsum(int (*arr)[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+(*arr)[i];
	}
	printf("\n%d\n",sum);
}

