//reverse string

#include<stdio.h>
#include<conio.h>

int main()
{
	int begin,end,count=0;
	char arr[20];
	char rev[50];

	printf("enter string");
	gets(arr);

	while(arr[count]!='\0')
		count++;

	end=count-1;


	for(begin=0;begin<count;begin++)
	{
		
		rev[begin]=arr[end];
		end--;

	}
	rev[begin]='\0';
	printf("rev %s",rev);
	getch();
	return 0;
}