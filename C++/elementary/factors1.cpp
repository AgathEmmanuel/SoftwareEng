#include <iostream>
#include <math.h>
using namespace std;


int main(){
	int num;
	cout<<"Enter num: ";
	cin>>num;
	for(int i=1;i<sqrt(num);i++){
		(num%i==0)?((num/i==i)?cout<<i<<" ":cout<<" "<<i<<" "<<num/i):cout<<"";
	}
	cout<<endl;
	return 0;
}


//This is more efficient method
