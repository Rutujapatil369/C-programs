//int(*arr[3])[2]);

// 'arr' is an array of three elements each element is of type pointer which stores address of another array which contain two elements of type integer.


#include<stdio.h>
#include<conio.h>

int main(void)
{
	int i,j;
	int array1[]={10,20};
	int array2[]={30,40};
	int array3[]={50,60};

	int(*arr[3])[2];
	arr[0]=&array1;
	arr[1]=&array2;
	arr[2]=&array3;

	for(i=0;i<3;i++)
	{
		printf("Address %d\n",arr[i]);
		printf("Address %d\n",&(arr[i]));
		printf("Address %d\n",*(arr[i]));

		for(j=0;j<2;j++)
		{
		printf("Values %d\n",(*arr[i])[j]);
		}
		
	}

	 
	getch();
	return 0;
}