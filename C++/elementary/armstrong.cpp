#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int num,sum=0,tem_num,len=0,rem;
	cout<<"enter num ";
	cin>>num;
	tem_num=num;
	while(num!=0){
		num/=10;
		len++;
	}
	num=tem_num;
	while(num!=0){
		rem=num%10;
		sum+=pow(rem,len);
		num/=10;
	}
	cout<<sum<<endl;
	if(tem_num==sum)
		cout<<"armstrong"<<endl;
	else
		cout<<"not armstrong"<<endl;
	return 0;
}
		
