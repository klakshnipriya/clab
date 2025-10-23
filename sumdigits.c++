#include<iostream>
using namespace std;

int main(){
int num ,sum =0;	
	
	cout<<" Enter a5 digit number:";
	cin>>num;
    
	//check if it's really a5-digit number
	if ( num<10000||num>9999){
		cout <<"invalid input!please enter a 5 digitnumber."<<endl;
		return 1;
	}
	 //extract and sum digits
	 while( num >0){
	 	int digit =num%10;      //get last digit 
	 	sum +=digit;          //add it to sum 
	 	num/=10;              //remove last digit
	 }

cout<<"sum of digits:"<<sum<<endl;
return 0;	
}
