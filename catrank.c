#include<stdio.h>
int main(void)
{
	short int rank=0;
	
	printf("Enter Your Rank =");
	scanf("%hd",&rank);

	if(rank>1 && rank<250)
	{
	     printf("Congratulations \n You Have allocate Sunbeam Pune Center");
	}
	else if(rank>251 && rank<500)
	{
	     printf("Congratulations \n You Have allocate Pune Acts Center");
	}
	else if(rank>501 && rank<750)
	{
	     printf("Congratulations \n You Have allocate Sunbeam Karad Center");
	}
	else if(rank>751 && rank<1000)
	{
	     printf("Congratulations \n You Have allocate ISCSD Pune Center");
	}
	else if(rank>1001 && rank<1250)
	{
	     printf("Congratulations \n You Have allocate Vita Mumbai Center");
	}
	else if(rank>1251 && rank<1500)
	{
	    printf("Congratulations \n You Have allocate Kharghar Mumbai Center");
	}
	else if(rank>1501 && rank<1750)
	{
	     printf("Congratulations \n You Have allocate Juhu Mumbai Center");
	}
	else if(rank>1751 && rank<2000)
	{
	     printf("Congratulations \n You Have allocate Know It Pune Center");
	}
	else if(rank>2001 && rank<2250)
	{
	     printf("Congratulations \n You Have allocate IET Pune Center");
	}
	else if(rank>2251 && rank<2500)
	{
	     printf("Congratulations \n You Have allocate MET Mumbai Center");
	}
	else if(rank>2501 && rank<2750)
	{
	     printf("Congratulations \n You Have allocate YCP Mumbai Center");
	}
	
	else if(rank>2751 && rank<3000)
	{
	     printf("Congratulations \n You Have allocate KP Banglore Center");
	}
	else
	{
	    printf("Sorry!! You have not Allocate any Center");
	}
}
