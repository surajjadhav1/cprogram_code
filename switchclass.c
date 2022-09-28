#include<stdio.h>
int main(void)
{
	int no; 

	printf("\n======== CDAC Center List ==========");
	printf("\n1.Sunbeam Pune"); 
	printf("\n2.Pune Acts"); 
	printf("\n3.Sunbeam karad"); 
	printf("\n4.ISCSD Pune"); 
	printf("\n5.Vita Mumbai"); 
	printf("\n6.Kharghar Mumbai"); 
	printf("\n7.Juhu Mumbai"); 
	printf("\n8.Know It Pune"); 
	printf("\n9.IET Pune"); 
	printf("\n10.MET Mumbai"); 
	printf("\n11.YCP Mumbai"); 
	
	printf("\nEnter center no If you have want = ");
	scanf("%d",&no);

	switch(no)
	{
	case 1:
		printf("You are Select Sunbeam Pune center and \n");
		printf(" Your have requred 1-250 Rank");
		break;

	case 2:
		printf("You are Select Pune Acts center and \n");
		printf("Your have requred 251-500 Rank");
		break;

	case 3:
		printf("You are Select Sunbeam Karad center and \n");
		printf("Your have requred 501-750 Rank");
		break;

	case 4:
		printf("You are Select ISCSD Pune center and \n");
		printf("Your have requred 751-1000 Rank");
		break;

	case 5:
		printf("You are Select Vita Mumbai center and \n");
		printf("Your have requred 1000-1250 Rank");
		break;

	case 6:
		printf("You are Select Kharghar Mumbai center and \n");
		printf("Your have requred 1251-1500 Rank");
		break;

	case 7:
		printf("You are Select Juhu Mumbai center and \n");
		printf("Your have requred 1501-1750 Rank");
		break;

	case 8:
		printf("You are Select Know It center and \n");
		printf("Your have requred 1751-2000 Rank");
		break;

	case 9:
		printf("You are Select IET Pune center and \n");
		printf("Your have requred 2001-2250 Rank");
		break;

	case 10:
		printf("You are Select MET Mumbai center and \n");
		printf("Your have requred 2251-2750 Rank");
		break;

	case 11:
		printf("You are Select YCP Mumbai center and \n");
		printf("Your have requred 2751-3000 Rank");
		break;
	
	default:
		printf("\n Your have Enter wrong No \n Elease Enter 1 to 12");
		

	}



}
