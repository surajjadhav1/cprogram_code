#include"loan.h"
#include<cstdio>
#include<iostream>
using namespace std;
	
int main(void)
{

	double principle;
	float period;
	int choice;

	cout<<"================================== "<<endl;
	cout<<"0. Personal Loan "<<endl;
	cout<<"1. Home Loan"<<endl;
	
	cout<<"Select Your Choice= ";
	cin>>choice;

	cout<<endl<<"Enter Principle Amount=";
	cin>>principle;
	cout<<"Enter Period= ";
	cin>>period;

	cout<<"==================================="<<endl;

	PersonalLoan p(principle,period);
	HomeLoan h(principle,period);

	switch(choice)
	{
		case 0: 
			cout<<"Principle="<<p.GetPrinciple()<<endl;
			cout<<"Period="<<p.GetPeriod()<<endl;
			cout<<"Emi="<<p.GetEMI()<<endl;
			break;

		case 1: 
			cout<<"Principle="<<h.GetPrinciple()<<endl;
			cout<<"Period="<<h.GetPeriod()<<endl;
			cout<<"Emi="<<h.GetEMI()<<endl;
			break;

		default:
			cout<<"invalid Input.."<<endl;
			break;
	}
}
