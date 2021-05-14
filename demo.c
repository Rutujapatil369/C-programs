#include<stdio.h>
int fact(int);
int ans;
int g=10;
int main()
{
 int no;
 printf("g is %d\n",g);
 printf("ans is %d\n",ans);
 printf("no is %d\n",no);
 printf("Enter no:\t");
 scanf("%d",&no);
 ans=fact(no);
 printf("Factorial is%d\n");
 exit(0);
 }
 int fact(int no)
 {
  if(no==1)
    return 1;
  return no* fact(no-1);
  }