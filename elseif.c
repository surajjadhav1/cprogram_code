#include<stdio.h>
int main(void)
{

	float amount;
	short int rate,age;
	
	printf("Enter age=");
	scanf("%hd",&age);

	if(age==16)
	{
	     rate=70;
	}		
	else if(age==18)
	{
	    rate=75;
	}
	
	else if(age==21)
	{
	     rate=85;
	}
	else if(age==60)
	{
	     rate=100;
	}
	else
	{
	     rate=50;
	}
	
	amount=age*rate;
	printf("Amount =%.2f",amount);
	
}
