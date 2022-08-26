#include <iostream>
using namespace std;

int main(){
	for(int i=0;i<=9;i++){
		cout<<"    ";
		for(int j=9;j>i;j--){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=8;i>=0;i--){
		cout<<"    ";
		for(int j=9;j>i;j--){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
