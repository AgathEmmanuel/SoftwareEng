#include <iostream>
using namespace std;

int main(){
	int lcm,num1,num2;
	cout<<"Enter 2 numbers: ";
	cin>>num1>>num2;
	lcm=(num1>num2)?num1:num2;
	while(1){
		if(lcm%num1==0 && lcm%num2==0){
			cout<<"\nLCM is "<<lcm<<endl;
			break;
		}
		++lcm;
	}
	return 0;
}

	
