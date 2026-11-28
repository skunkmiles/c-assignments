#include<iostream>
#include<string>
using namespace std;


class student{
	public:
	string studentname;
	string admission_number;
	double feebalance;
	
	void imputdetails(){
     cout<<"studentname:";
     cin>>studentname;

     cout<<"admission_number:";
      cin>>admission_number;
      
      cout<<"feebalance:";
      cin>>feebalance;
	}
	void makepayment(){
		double amount;
		
		cout<<"\nEnter  payment amount:";
		cin>>amount;
		
      if(amount>0 &&amount <=feebalance){
		  feebalance =feebalance - amount;
		  cout<<"payment successful!"<<endl;
	  }
	  else{
		  cout<<"invalid payment amount!"<<endl;
	  }
	}
	void displaystatus(){
		cout<<"\n-------FEE DETAILS--"<<endl;
		cout<<"studentname:"<<studentname<<endl;
		cout<<"admission_number:"<<admission_number<<endl;
		cout<<"remaining fee balance:"<<feebalance<<endl;
	}
	
};

int main(){
	
	//create object of book class
	student student1;
	 
	 student1.imputdetails();
	 
	 student1.makepayment();
	 
     student1.displaystatus();
	
	
	return 0;
}