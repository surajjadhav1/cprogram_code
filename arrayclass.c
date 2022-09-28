#include<stdio.h>
int a[]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
int main(void)
{	
	short month=0;

	printf("Enter month=");
	scanf("%hd",&month);
	
	if(month<=12)
	{	
	   printf("In That Month there are %hd days",a[month]);
	}
	else
	{
	   printf("You are entered wrong month please \n Enter 1 to 12 number for Month's days");  
	}
}
