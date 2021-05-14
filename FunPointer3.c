//void(*fptr)(void)

//'fptr' is a pointer which stores address offunction which accept nothing and returns nothing.

#include<stdio.h>
#include<conio.h>

void fun(void);
int main()
{
   void(*fptr)(void)=&fun;
   fptr();

   getch();
   return 0;
}

void fun(void)
{
	int iNo1=10;
	printf("%d\n",iNo1);
}
	