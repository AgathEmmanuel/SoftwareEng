#include <iostream>
using namespace std;


int main(){
	int num,sum=0,num_tmp;
	cout<<"Enter num :";
	cin>>num;
	num_tmp=num;
	while(num!=0){
		sum+=num%10;
		num/=10;
	}
	(num_tmp%sum==0)?cout<<"harshad":cout<<"not harshad";
	cout<<endl;
	return 0;
}


