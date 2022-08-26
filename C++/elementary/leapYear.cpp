// leap year
// The year to be checked must be greater than 1581
//

#include <iostream>
using namespace std;

int main(){
	int year;
	cout<<"Enter year ";
	cin>>year;
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				cout<<"leap"<<endl;
			}
			else{
				cout<<"not leap"<<endl;
			}
		}
		else{
			cout<<"leap"<<endl;
		}
	}
	else{
		cout<<"not leap"<<endl;
	}
	cout<<endl;
	return 0;
}


