#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>   
struct student
{ 
		int data;  
		struct student *link;  
};  
int count=0;  
struct student *head=NULL;  
struct student *ptr=NULL;   
void add(int data)
{
	struct student *newnode=(struct student*)malloc(sizeof(struct student));  
	newnode->data=data; 
	if(head==NULL)
	{ 
		head=newnode; 
		ptr=newnode;  
		newnode->link=head;  
	}
	else 
	{  
		ptr->link=newnode;  
		ptr=newnode; 												                ptr->link=head; 
	}  
}  
void countnodes() 
{  
	struct student *temp=head;  
	do{  
		count++;  
		temp=temp->link; 
    	}while(temp!=head);  
     	printf("Count of nodes present in circular linked list: %d",count);  
}  
int main()  
{  
       	add(10);  
	add(20);  
	add(30);  
	add(40);  
	add(50);   
	countnodes();  
	return 0;  
}  
