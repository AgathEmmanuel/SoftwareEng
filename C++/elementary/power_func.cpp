#include <iostream>
using namespace std;

int main(){
	int base,exponent;
	long int result=1;
	cout<<"Enter the base ";
	cin>>base;
	cout<<"Enter the exponent ";
	cin>>exponent;
	while(exponent!=0){
		result*=base;
		--exponent;
	}
	cout<<result<<endl;
	return 0;
}


