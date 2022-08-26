#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter 2 numbers";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"num after swappin: "<<a<<" "<<b;
}

