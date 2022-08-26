#include <iostream>
using namespace std;

int main(){
	int a=0,b=1,nval;
	int limit;
	cout<<"enter llimit ";
	cin>>limit;
	while(limit!=0){
		nval=a+b;
		a=b;
		b=nval;
		cout<<nval<<" ";
		--limit;
	}
	cout<<endl;
	return 0;
}

	
