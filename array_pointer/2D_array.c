#include <stdio.h>
void display(int a[3][3]);
int main() 
{
      	int array[3][3];
	printf("Enter array elements:\n");
	for(int i=0;i<3;++i) 
	{
		for(int j=0;j<3;++j) 
		{
			scanf("%d", &array[i][j]);
	       	}
	}
	display(array);
}
void display(int a[3][3]) 
{
      	int i,j;
	printf("print the array elemnets:\n");
	for(i=0;i<3;++i) 
	{
		for(j=0;j<3;++j) 
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
