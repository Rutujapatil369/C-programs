
/*pattern

1
12
123
1234
12345

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
	for(i=1;i<=iNo;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d",j);
		}
		printf("\n");
	}
}

