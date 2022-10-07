#include<cstdio>
#include"Patient.h"
#include<cstring>
#include<iostream>
using namespace std;
float TotalAmount(Patient& info)
{
	float GST=0.5;
	return GST*info.GetBillAmount();
}
int main(void)
{
	int Pid;
	char Pname[15];
	int BType;
	int NDays;
	int choice;
	puts("1. Outside Patient");
	puts("2. In House Patient");
	puts("Enter Your Choice");
	scanf("%d",&choice);
	puts("Enter the Patient Name");
	scanf("%s",Pname);
	puts("Enter Patient ID");
	scanf("%d",&Pid);
	puts("Enter the Bed Type and No of Days:");
	scanf("%d%d",&BType,&NDays);
	Patient a;
	InHousePatient b;
	a.SetData(Pid,Pname,BType,NDays);
	b.SetData(Pid,Pname,BType,NDays);
	switch(choice)
	{
		case 1:
		a.ShowData();
		printf("The total Amount of Patient is:%f\n",TotalAmount(a));
		break;
		case 2:
		b.ShowData();
		printf("The total Amount of Patient is:%f\n",TotalAmount(b));
		break;
		default:
		puts("Invalid Entry");
	}
}

