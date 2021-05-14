//int *(*p())[];

//'p' is a function which accept nothing and returns address of array and each array element is of type address of integer.


#include<stdio.h>
#include<conio.h>

int *(*p())[];

int main(void)
{
	int *(*pPtr)[]=p();
	printf("%d\n",*(*pPtr)[0]);
	printf("%d",*(*pPtr)[1]);

	
	getch();
	return 0;
}

int *(*p())[]
{
	static int iNo1=10;
	static int iNo2=20;
	static int iNo3=30;
	 
	static int *arr[3];
	 arr[0]=&iNo1;
	 arr[1]=&iNo2;
	 arr[2]=&iNo3;

	 return &arr;

	 

}