/*pattern invert half pyramid

*****
****
***
**
*

*/

#include<stdio.h>
#include<conio.h>

void fun(int);


int main()
{
	int iNo;
	printf("Enter number:");
	scanf("%d",&iNo);

	fun(iNo);

	getch();
	return 0;
}

void fun(int iNo)
{
	int i,j;
	for(i=iNo;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
}