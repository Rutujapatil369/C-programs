#include<stdio.h>
#include<conio.h>
void swap(int,int );
int main()
{
	int iNo1, iNo2;

	printf("Enter two numbers:\n");
	scanf("%d %d",&iNo1,&iNo2);

	swap(iNo1,iNo2);

	getch();
	return 0;
}

void swap(int iNo1,int iNo2)
{
	printf(" fun2 numbers Before swapping:iNo1=%d,iNo2=%d\n",iNo1,iNo2);
	iNo1=iNo1*iNo2;
	iNo2=iNo1/iNo2;
	iNo1=iNo1/iNo2;
	printf("fun2 numbers after swapping:iNo1=%d,iNo2=%d\n",iNo1,iNo2);
}