//int(*(*p())[])();

/*'p' is a function which accepts nothing and return pointer which stores address of array,each array element is of type pointer
which stores address of  function which accepts nothing and returns interger*/

#include<stdio.h>
#include<conio.h>

int(*(*p())[])();
int fun1();
int fun2();
int fun3();

int main(void)
{
   int (*(*pPtr)[])()=p();

   printf("Addition is %d\n",(*(*pPtr)[0])());
   printf("Multiplication is %d\n",(*(*pPtr)[1])());
   printf("Mod is %d\n",(*(*pPtr)[2])());

   getch();
   return 0;
}

int(*(*p())[])()
{
   static int(*arr[3])();
	arr[0]=&fun1;
	arr[1]=&fun2;
	arr[2]=&fun3;

	return &arr;

}

int fun1()
{
	static int iNo1=20;
	static int iNo2=30;
	static int iAns;

	iAns=iNo1+iNo2;
	return iAns;
}

int fun2()
{
	static int iNo1=20;
	static int iNo2=30;
	static int iAns;

	iAns=iNo1*iNo2;
	return iAns;
}
int fun3()
{
	static int iNo1=20;
	static int iNo2=30;
	static int iAns;

	iAns=iNo1%iNo2;
	return iAns;
}