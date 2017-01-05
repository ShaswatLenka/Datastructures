#include <iostream>
using namespace std;


struct node
{
	 int data;
	 node *link;
};

node *head = NULL;

//function to print the linked list
void print(node *head)
{
	node *pointer = head;
	do
	{
	printf("%d\t",pointer->data );
	pointer=pointer->link;
	}while (pointer->link);
}

// function to reverse a linked list
node *reverse(node *head)
{
 	node *cursor=NULL;
 	node *next;
 	while(head)
 	{
 		next=head->link;
 		head->link=cursor;
 		cursor=head;
 		head=next;
	}
	return cursor;
}


//function to make a node
void insert(int x)
{
	node *newnode = new node();
	newnode-> data = x;
	newnode->link = head;
	head = newnode;

}
// main function
main()
{

	int n,data;

	do
	{
	cout<<"Enter 1 to insert and 0 to exit \n";
	cin>> n;
if (n==1)
{
	cout<<"Enter number to insert \n";
	cin>>data;
	insert(data);
}
}while (n!=0);
print(head);
cout<<"\n";
cout<<"The reversed liked list looks like: \n";
head = reverse(head);
print(head);
cout<<"\n";
}