#include <iostream>
using namespace std;


int main(){
	for(int j=1;j<=5;j++){
		for(int i=1;i<=10;i++){
			(i==1 || i==10 || j==1 || j==5)?cout<<"* ":cout<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}

