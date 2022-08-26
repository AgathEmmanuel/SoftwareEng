#include <iostream>
using namespace std;

int sum_div(int num){
	int sum=0;
	for(int i=1;i<num;i++){
		(num%i==0)?sum+=i:sum+=0;
	}
	return sum;
}

int main(){
	int num1,num2;
	cout<<"Enter two numbers ";
	cin>>num1>>num2;
	(sum_div(num1)==num1 && sum_div(num2)==num2)?cout<<"friendly"<<endl:cout<<"not freindly"<<endl;
	return 0;
}

