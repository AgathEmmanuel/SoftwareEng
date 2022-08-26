#include <iostream>
using namespace std;

int main(){
	int limit,flag;
	cout<<"enter limit ";
	cin>>limit;
	for(int num=1;num<=limit;num++){
		if(num==1||num==0)
			continue;
		flag=1;
	
		for(int i=2;i<=num/2;i++){
			if(num%i==0){
				flag=0;
				break;
			}
		}
		if(flag==1)
			cout<<num<<" "<<endl;
	}
}

