//void(*p[3])(int,int);

//'p' is an array of three elements each element is of type pointer which stores address of function which accept two parameters , both are integer and returns nothing.

#include<stdio.h>
#include<conio.h>

void fun1(int,int);
void fun2(int,int);
void fun3(int,int);

int main(void)
{
   void(*pPtr[3])(int,int);

   pPtr[0]=&fun1;
   pPtr[1]=&fun2;
   pPtr[2]=&fun3;

   pPtr[0](10,20);
   pPtr[1](30,20);
   pPtr[2](10,20);

   getch();
   return 0;
}

void fun1(int iNo1,int iNo2)
{
	int iAns;
	iAns= iNo1+iNo2;
	printf("%d\n",iAns);
}


void fun2(int iNo1,int iNo2)
{
	int iAns;
	iAns= iNo1-iNo2;
	printf("%d\n",iAns);
}

void fun3(int iNo1,int iNo2)
{
	int iAns;
	iAns= iNo1*iNo2;
	printf("%d\n",iAns);
}


