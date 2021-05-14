//Function type 1 program
#include <stdio.h>
#include <conio.h>
void swap();
int main()
{
	swap();
	getch();
	return 0;
}
void swap()
{ 
	int iNo1, iNo2;
	printf("Enter two numbers:\n");
	scanf("%d %d",&iNo1,&iNo2);
	printf(" Numbers Before swapping:iNo1=%d,iNo2=%d\n",iNo1,iNo2);
	iNo1=iNo1+iNo2;
	iNo2=iNo1-iNo2;
    iNo1=iNo1-iNo2;
	printf("Numbers After swapping:iNo1=%d,iNo2=%d\n",iNo1,iNo2);
}