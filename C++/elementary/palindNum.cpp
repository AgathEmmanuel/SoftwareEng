#include <iostream>
using namespace std;

int main(){
	int num,rev=0,rem,tem_num;
	cout<<"Enter a num ";
	cin>>num;
	tem_num=num;
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(rev==tem_num){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;
	}
	return 0;
}


		

