
//print common elements from array

#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[76];
	int i,iCount,j,size;
	int freq[10];

	printf("Enter size of array:");
	scanf("%d",&size);

	printf("Enter the elements:");
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	freq[i]=-1;
	}

	for(i=0;i<size;i++)
	{
		iCount=1;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				iCount++;
				freq[j]=0;
			}
		}

		if(freq[i]!=0)
		{
			freq[i]=iCount;
		}
}
	printf("common elements are:");
	for(i=0;i<size;i++)
	{
		if(freq[i]>1)
		{
			printf("%d\n",arr[i]);
		}
	}
		getch();
		return 0;
}
