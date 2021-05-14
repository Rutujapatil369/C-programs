//int *(*fptr)(int*,int*);

/*'fptr' is a pointer which stores address of function which accept two pointers and both stores the address of interger and returns pointer which 
   stores address of interger*/

#include<stdio.h>
#include<conio.h>

int *fun1(int*,int*);
int main(void)
{
  int iNo1=10;
  int iNo2=20;
 
  int(*fpPtr);
  fpPtr=fun1(&iNo1,&iNo2);

  printf("%d \n",*fpPtr);

  getch();
  return 0;
}

int* fun1(int * ipNo1 ,int * ipNo2 )
{

	if(*ipNo1>*ipNo2)
	{
	return ipNo1;
	}
	else
	{ 
	return ipNo2;
	}



}



