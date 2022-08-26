#include <iostream>
using namespace std;

int main(){
	int a,b,gcd,gcd_final;
	cout<<"enter the 2 numbers: ";
	cin>>a>>b;
	for(gcd=1;gcd<=a && gcd<=b;gcd++){
		if((a%gcd==0)&&(b%gcd==0)){
			 gcd_final=gcd;
		}
	}
	cout<<"GCD is "<<gcd_final<<endl;
	return 0;
}

