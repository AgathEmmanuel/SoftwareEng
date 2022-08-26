#include <iostream>
using namespace std;

int fact(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}

int main(){
	int num,tem_num,sum=0,rem;
	cout<<"Enter num ";
	cin>>num;
	tem_num=num;
	while(num!=0){
		rem=num%10;
		sum+=fact(rem);
		num/=10;
	}
	if(tem_num==sum)
		cout<<"strong num"<<endl;
	else
		cout<<"not strong num"<<endl;
	return 0;

}


	
