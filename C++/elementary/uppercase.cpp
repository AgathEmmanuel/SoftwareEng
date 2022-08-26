#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<"\nEnter a character: ";
	cin>>ch;
	if(ch>='a'&& ch<='z')
		cout<<"lower case";
	else if(ch>='A' && ch<='Z')
		cout<<"upper case";
	else if(ch>=48 && ch<=57)
		cout<<"number";
	else
		cout<<"symbol";
	return 0;
}

