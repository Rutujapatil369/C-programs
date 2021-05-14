//prime number

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,flag=0;

	printf("enter number");
	scanf("%d",&n);


	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		
			flag=1;
			break;
		}
		
			
		}

	if(n==1)
		printf("number is not prime nor composite");

	else
	{
		if(flag==0)
			printf("number is prime");
		else
			printf("number is not prime");
	}

	getch();
	return 0;


	}
	