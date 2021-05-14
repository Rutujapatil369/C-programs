/*Invert full pyramid

*******
 *****
  ***
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
	int i;
	int j,space;
	for(i=1;i<=iNo;i++)
	{
		for(space=1;space<=i;space++)
		{
			printf(" ");

		}

		for(j=iNo;j<=((2*iNo)-((2*i)-1));j++)
		{
			printf("*");

		}
		printf("\n");
	}

}


