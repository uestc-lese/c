#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter phone number[(xxx) xxx-xxxx]:");
    scanf(" (%d) %d - %d",&a,&b,&c);
	printf("you entered %d.%d.%d",a,b,c);	
}

