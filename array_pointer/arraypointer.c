#include<stdio.h>
#define SIZE 5
int main()
{
	int array[]={1,2,3,4,5};
	int i,*ptr[SIZE];
	for(i=0;i<SIZE;i++)
	{
		ptr[i]=&array[i];
	}
	for(i=0;i<SIZE;i++)
	{
		printf("%d\n",*ptr[i]);	
	}
}
