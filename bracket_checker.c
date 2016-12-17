#include <stdio.h>
//#include <stdlib.h>
#include <string.h>


char arr[50],j=0;
void push(char c);
int IsEmpty(void);
void pop(void);
int check(char bracket);

// MAIN FUNCTION

void main(void)

{
	int i;
	char str[50];
	printf("Enter an expression\n");
	fgets(str,50,stdin);
for(i=0;i<strlen(str);i++)
{
	if(str[i]=='('|| str[i]=='{'|| str[i]=='[')
	{

		push(str[i]);
		j++;
		continue;
	}

	else if(str[i]==')')
	{
		if(check(str[i]))
		{
			pop();
		}
		else 
		{
			printf("Syntax Error\n");
			break;

		}
	}
	else if(str[i]=='}')
	{
		if(check(str[i]))
		{
			pop();
		}
		else
		{
			printf("Syntax Error\n");
			break;
		}
	}
	else if(str[i]==']')
	{
		if(check(str[i]))
		{
			pop();
		}
		else
		{
			printf("Syntax Error\n");
			break;
		}
	}
}
if(IsEmpty())
printf("No Syntax Error.Congrats!!!\n");
else printf("Syntax Error\n");
}

void push(char c)
{
	arr[j]=c;
}
void pop(void)
{
		j--;
}
int check(char bracket)
{
	j--;
	if((arr[j]=='('&& bracket==')') || (arr[j]=='{' && bracket=='}') || (arr[j]=='[' && bracket==']') )
	{
	j++;
	return 1;
	}
else 
	return 0;
 
}

int IsEmpty(void)
{

if(j==0)
	return 1;
else
	return 0;
}
