#include <iostream>
using namespace std;
 
int main(){
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	cout<<endl;
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	//if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
		cout<<ch<<" is an alphabet"<<endl;
	else
		cout<<ch<<" is not an alphabt"<<endl;
	return 0;
}


