#include <iostream>
using namespace std;

int main(){
	int num,fact=1;
	cout<<"Enter num ";
	cin>>num;
	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	cout<<fact<<endl;
	return 0;
}
