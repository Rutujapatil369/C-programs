#include<stdio.h>
#include<conio.h>

int swap(  int * , int );
int main()
{
	int iNo1,iNo2;

	printf("Enter two numbers:\n");
	scanf("%d %d",&iNo1,&iNo2);

	printf("\n Fun3 numbers before swapping: iNo1=%d,iNo2=%d\n",iNo1,iNo2);

	iNo2=swap(&iNo1,iNo2);


	printf("\ Fun3 numbers after swapping: iNo1=%d,iNo2=%d",iNo1,iNo2);

	
	getch();
	return 0;

}

int swap(int *iNo1,int iNo2)
{
	
	 *iNo1=*iNo1+iNo2;
     iNo2= *iNo1-iNo2;
	 *iNo1=*iNo1-iNo2;

	 return iNo2;

	
	
}
 