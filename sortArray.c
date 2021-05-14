//sort the array containg  spl symbols ,characters,digits

#include<stdio.h>
#include<conio.h>

int main()
{
	char arr[50];

	int i,ialpha=0,special=0,digits=0,sum=0;

	printf("Enter string");
	gets(arr);

	for(i=0;arr[i];i++)
	{
		if(arr[i]>'A' && arr[i]<'Z' || arr[i]>'a' && arr[i]<'z')
		{
			
			ialpha++;
			printf("alpha %d",ialpha);
			printf("->%c\n",arr[i]);
			
		
	
			
		}

		else if(arr[i]>'0' && arr[i]<'9')
		{
			  digits++;
			  printf("digits %d",digits);
			  printf("->%c\n",arr[i]);
			
		
				sum=sum+(arr[i]-'0');
			
			
		}
		else
		{
			special++;
			printf("special %d",special);
			printf("->%c\n",arr[i]);
			
		
		}
	}

	
	printf("sum %d",sum);

	getch();
	return 0;
}