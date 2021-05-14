//largest among three
#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2,n3;

	printf("Enter numbers");
	scanf("%d%d%d",&n1,&n2,&n3);

	if(n1>n2 && n1>n3)
		printf("largesr is%d\n",n1);
	if(n2>n1 && n2>n3)
		printf("largesr is%d\n",n2);
	if(n3>n1 && n3>n2)
		printf("largesr is%d\n",n3);

	getch();
	return 0;
}