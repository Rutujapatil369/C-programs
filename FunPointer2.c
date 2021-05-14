//int * fun(void);

//'fun' is a function which accept nothing and returns pointer which stores address of integer.

#include<stdio.h>
#include<conio.h>

int * fun(void);
int main()
{
	int i;
	int(*pPtr)=fun();
	for(i=0;i<6;i++)
	{ 
		printf("%d\n",pPtr[i]);
	}
	getch();
	return 0;
}

int *fun(void)
{
	static int arr[6]={1,2,3,4,5,6};
	return arr;
}