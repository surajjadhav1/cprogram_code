class Loan
{
	private:
		double principle;
		float period;
		float rate;
	
	public:

		Loan()
		{
		   principle=12000;
		   period=3;
		   rate=6000;
		}
		
		double GetPrinciple()
		{	
		   return principle;
		}
		
		void SetPrinciple(double prin)
		{
		  principle=prin;
		}

		float GetPeriod()
		{	
		   return period;
		}
		
		void SetPeriod(double prd)
		{
		  period=prd;
		}

		virtual float GetRate()=0;
		//double GetExtra();
	
		double GetEMI()
		{		
        	return principle*(1+GetRate()*period/100)/(12*period);			
		}  
};


class PersonalLoan : public Loan
{	
	public:
		  PersonalLoan(double pri, float prd)
		  {
			Loan::SetPrinciple(pri);
			Loan::SetPeriod(prd);
		  }

		float GetRate()
		{
	           if(GetPrinciple()<=500000)
		   {
			return 15;
		   }
		  else
		   {
			return 16;
		   }	  
		}
};

class HomeLoan : public Loan
{	
	public:

			



		HomeLoan(int pri, float prd, double lmt=2500000 )
		  {	
			Loan::SetPrinciple(pri);
			Loan::SetPeriod(prd);
			limit=lmt;
		  }

		  double GetLimit()
		 {
		   return limit;
	  	 }	
		

		double GetExtra()
		{	
		   double Extra;
   
		 if(limit>=2500000)
		   {
		     Extra = GetPrinciple()*(1/100);
		     return Extra;
		   }
		}


		

		float GetRate()
		{
	        if(GetPrinciple()<=2000000)
		   {
			return 10;
		   }
		  else
		   {
			return 11;
		   }
		}


	private:
		double limit;

};





