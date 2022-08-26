#include <iostream>
using namespace std;

bool_auto(int n){
	int sq=n*n;
	while(n>0){
		if(n%10!=sq%10)
			return false;
		n/=10;
		sq/=10;
	}
	return true;
}

int main(){
	int num;
	cout<<"Enter num ";
	cin>>num;
	bool_auto(num)?cout<<"auotmorphic":cout<<"not automorphic";
	cout<<endl;
	return 0;
}

