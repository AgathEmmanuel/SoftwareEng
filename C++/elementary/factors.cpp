#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter num ";
	cin>>num;
	for(int i=1;i<num;i++){
		(num%i==0)?cout<<i<<" ":cout<<"";
	}
	cout<<endl;
	return 0;
}


