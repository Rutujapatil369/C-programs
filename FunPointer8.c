//void *(*p)(char,int(*)());

/*'p' is a pointer which stores address of function which accepts two parameter one is character and other is pointer which stores address of function which accept nothing 
   and returns integer and that whole function returns pointer pointing to anything.*/

#include<stdio.h>
#include<conio.h>

void * fun1(char,int(*)());
int fun2();

int main(void)
{
 char chChar;
 char *pPtr;
 void *(*p)(char,int(*)())= fun1;
 pPtr = (char *) p(chChar,&fun2);

 printf(" %c %d",*pPtr,*fun2);
 

 
 
   getch();
   return 0;
}

void * fun1(char chChar,int(*fpPtr)())
{
	chChar='A';

	int(*fpPtr)()=&fun2;

	return &chChar;
}

int fun2()
{
	int iNo1=10;
	int iNo2=20;
	int iAns;

	iAns=iNo1+iNo2;
	return iAns;
}





