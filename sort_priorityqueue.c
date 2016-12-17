//Sorting an array using priority queue

#include <stdio.h>

int Q[10],r=-1,k=1,f=-1;
void insert (int data);
void delete(void);
int full(void);
int empty(void);
void traverse(void);

void main(void)
{
	int n;
	do
	{
		printf("Enter 1 for insert\n");
		printf("Enter 2 for remove\n");
		printf("Enter 3 for traverse\n");
		printf("Enter 0 to exit\n");
		printf("Enter your choice\n");
		scanf("%d", &n);
 	if(n==1)
	{
		if(full())
		{
			printf("Queue is full\n" );
			continue;		
		}
		int data;
		printf("Enter number\n");
		scanf("%d", &data);
		insert(data);
	}
	if(n==2)
	{
		if(empty())
		{
			printf("Queue is empty\n");
			continue;
		}
		delete();
	}

	if(n==3)
	{
		if(empty())
		{
			printf("Queue is empty\n");
			continue;
		}
		traverse();
	}

	}while(n!=0);
}

void insert(int data)
{
	int l;
	if(r==-1)
	{
		r=0;
		f=0;
		Q[r]=data;
	}
	else 
	{
		while (r<k &&  data>=Q[r])
			r++;
		for(l=k;l>r;l--)
		{
			Q[l]=Q[l-1];
		}
		Q[r]=data;
		r=0;
		k++;
		

	}

}

void traverse(void)
{
	int l;
		for(l=0;l<k;l++)
	{
		printf("%d ", Q[l] );
	}
printf("\n");
}

int full(void)
{
	if(k>9) return 1;
	else return 0; 
}

int empty(void)
{
	if(f==-1 || f==k)
		return 1;
	else
		return 0;
}

void delete(void)
{
	int l;
	printf("%d\n",Q[0] );
	for(l=0;l<k-1;l++)
	{
		Q[l]=Q[l+1];
	}
	k--;
	//traverse();
}
