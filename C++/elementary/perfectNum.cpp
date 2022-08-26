#include <iostream>
using namespace std;

int main(){
	int num,sum=0;
	cout<<"Enter number ";
	cin>>num;
	for(int i=1;i<num;i++){
		(num%i==0)?sum+=i:sum+=0;
	}
	(sum==num && num!=1)?cout<<"perfect"<<endl:cout<<"not perfect"<<endl;
	return 0;
}


//Time complexity : O(n)
