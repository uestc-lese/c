#include<stdio.h>
int main()
{
	int mm,dd,yyyy;
	printf("Enter a date:");
	scanf("%d/%d/%d",&mm,&dd,&yyyy);
	printf("you entered the date:%d%.2d%d",yyyy,mm,dd);
	return 0;
 } 
