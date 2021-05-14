//soring array in ascensing order

#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[20],n,temp,i,j;

	printf("enter value of n");
	scanf("%d",&n);

	printf("Enter numbers");

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

		printf("numbers in a order is\n");
		for(i=0;i<n;i++)
			printf("%d",arr[i]);
		getch();
		return 0;
	
}