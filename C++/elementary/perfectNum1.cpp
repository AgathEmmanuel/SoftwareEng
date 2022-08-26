#include <iostream>
using namespace std;

int main(){
	int num,sum=1;
	cout<<"Enter number ";
	cin>>num;
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			(i*i!=num)?sum+=i+num/i:sum+=sum+i;
		}
	}
	(sum==num && num!=1)?cout<<"perfect"<<endl:cout<<"not perfect"<<endl;
	return 0;
}



//Time complexity : O(n/2)
