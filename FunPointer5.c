//void * fptr(void);

//'fptr' is a function which accept nothing and pointing/stores address of anything.

#include<stdio.h>
#include<conio.h>

void * fptr(void);

int main()
{
	int *ptr;
	void *(*pPtr)(void)=&fptr;
	ptr=(int*)pPtr();
	printf("%d",*pPtr);

}

void  * fptr(void)
 {
	static int iNo1=10;
	static int iNo2=20;
	static int iMult;

	iMult=iNo1*iNo2;

	return &iMult;
}
