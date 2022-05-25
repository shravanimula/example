#include<stdio.h>
int main()
{
	int a[9]={1,2,3,4,1,3,4,5,5};
	int i,r=0;
	for(i=0;i<9;i++)
	{
		r=r^a[i];
	}
	printf("%d\n",r);
}
