#include<stdio.h>
#include<conio.h>
void swap1(int *,int *);
int main()
{
	int iNo1,iNo2;

	printf("Enter two numbers:\n");
	scanf("%d %d",&iNo1,&iNo2);

	printf("\n Before swapping: iNo1=%d,iNo2=%d",iNo1,iNo2);

	swap1(&iNo1,&iNo2);

	printf("\n After swapping: iNo1=%d,iNo2=%d",iNo1,iNo2);

	getch();
	return 0;

}

void swap1( int *iNo1,int *iNo2)
{
	 *iNo1 = *iNo1 + *iNo2;
     *iNo2= *iNo1 - *iNo2;
	 *iNo1=*iNo1 - *iNo2 ;
}
