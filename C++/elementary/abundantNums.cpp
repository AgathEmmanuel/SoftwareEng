#include <iostream>
using namespace std;


int main(){
	int num,sum=0;
	cout<<"Enter num : ";
	cin>>num;
	for(int i=1;i<num;i++){
		(num%i==0)?sum+=i:sum+=0;
	}
	(sum>num)?cout<<"abundant":cout<<"not abudant";
	cout<<endl;
}

