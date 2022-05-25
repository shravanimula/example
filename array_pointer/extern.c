#include<stdio.h>
int main()
{
	extern int var;
	++var;
	printf("%d\n",var);
}
