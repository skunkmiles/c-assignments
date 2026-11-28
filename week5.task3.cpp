#include<iostream>
using namespace std;
class Book{
	public:
	string Booktitle;
	string Author;
	int copiesAvailable;
	
	void imputdetails(){
     cout<<"book title:";
     cin>>Booktitle;

     cout<<"Author:";
      cin>>Author;
      
      cout<<"copiesavailable:";
      cin>>copiesAvailable;
	}
	void borrowbook(){
      if(copiesAvailable>0){
		  copiesAvailable--;
		  cout<<"Book borrowed successfully!"<<endl;
	  }
	  else{
		  cout<<"no copies available!"<<endl;
	  }
	}
	void displaydetails(){
		cout<<"\n-------BOOK DETAILS--"<<endl;
		cout<<"Booktitle:"<<Booktitle<<endl;
		cout<<"Author:"<<Author<<endl;
		cout<<"available copies:"<<copiesAvailable<<endl;
	}
	
};

int main(){
	
	//create object of book class
	Book book1;
	 
	 book1.imputdetails();
	 
	 book1.borrowbook();
	 
	 book1.displaydetails();
	
	
	return 0;
}