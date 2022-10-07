#include<cstring>
class Patient
{
	private:
		int PatientID;
		char PatientName[10];
		int BedType;
		int NoOfDays;

	public:
		Patient()
		{
			PatientID=101;
			strcpy(PatientName,"XYZ");
			BedType=1;
			NoOfDays=5;
		}
		void SetData(int Pid, char Pname[10], int Btype, int Nday)
		{
			PatientID=Pid;
			strcpy(PatientName,Pname);
			BedType=Btype;
			NoOfDays=Nday;
		}
		void ShowData()
		{
			printf("The Patient Name is: %s\n",PatientName);
			printf("The Patient ID:%d\nBed Type:%d\nNo of Days are:%d\n",PatientID,BedType,NoOfDays);
		}
		virtual	float GetBillAmount()
		{
			float Amount=0;
			switch(BedType)
			{
				case 1:
					Amount= NoOfDays*500;
					break;
				case 2:
					Amount= NoOfDays*350;
					break;
				default:
					Amount= NoOfDays*200;
			}
			return Amount;
			
		}
		~Patient()
		{
		}


};
class InHousePatient : public Patient
{
	private:
		float discount;
	public:
		InHousePatient(float dis=0.05):Patient()
		{
			discount=dis;
		}
		float GetBillAmount()
		{
		float Amount=Patient::GetBillAmount();
		if(Amount>5000)
			return Amount-Amount*discount;
		else	
				return Amount;
		}

};

