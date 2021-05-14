/* pattern of full pyramid of stars

         *
		***
	   *****
	  *******
	 *********

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
	int i,space,k;
	for(i=1;i<=iNo;i++)
	{
		for(space=1;space<=iNo-i;space++)
		{
		printf(" ");
		}
	    for(k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
}


