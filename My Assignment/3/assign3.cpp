#include"patient.h"
#include<cstdio>
#include<iostream>
double GetFinalExpances(Patient& p)
	{
	double amount = p.GetBillAmount();
	amount = amount * 1.05;
	return amount;
	}	
using namespace std;
int main(void)
{
	int id;
	string name;
	int bedtype;
	int days;
	float discount;
	
	cout<<"Enter Patient ID :";
	cin >> id;

	cout<<"Enter Patient Name :";
	cin>> name;

	cout<<"Enter Bed Type :";
	cin>> bedtype; 
	
	cout<<"Enter No Of Days:";
	cin>> days;
	
	
	cout << "-----------------------------------------------------------------"<<endl;

	Patient p (id, name, bedtype, days);
	cout << "Patient Total Bill :"<<p.GetBillAmount()<<endl;
	cout << "Patient Total Bill With GST :"<<GetFinalExpances(p)<<endl;
		
	cout << "-----------------------------------------------------------------"<<endl;

	InHousePatient ip (id, name, bedtype, days, discount);
	cout << "In House Patient Total Bill :"<<ip.GetBillAmount()<<endl;	
	cout << "In House Patient Total Bill With GST :"<<GetFinalExpances(ip)<<endl;

	cout << "-----------------------------------------------------------------"<<endl;

}
