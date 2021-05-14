//print comman alphabets in string

#include<stdio.h>
#include<conio.h>

int main()
{
	char str[76];
	int i,iCount,j,size;
	int freq[10];

	printf("Enter string:");
	gets(str);

	printf("setting frequency:");
	for(i=0;str[i];i++)
	{
	freq[i]=-1;
	}

	for(i=0;str[i];i++)
	{
		iCount=1;
		for(j=i+1;str[j];j++)
		{
			if(str[i]==str[j])
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
	for(i=0;str[i];i++)
	{
		if(freq[i]>1)
		{
			printf("%c\n",str[i]);
		}
	}
		getch();
		return 0;
}