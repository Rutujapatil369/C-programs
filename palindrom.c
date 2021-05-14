// palindrome prog

#include<stdio.h>
#include<conio.h>

int main()
{
	int n, original,remainder,reverse=0;

	printf("enter number");
	scanf("%d",&n);

	original=n;

	while(n!=0)
	{
		remainder=n%10;					//we get the remainder
		reverse=reverse *10+remainder;  //logic to reverse the number
		n=n/10;                         //we get the quotient as 45 
	}

	if(original==reverse)
		printf("palindrome");

	else
		printf("not ");

	getch();
	return 0;
}