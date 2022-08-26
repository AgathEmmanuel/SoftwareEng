#include <iostream>
using namespace std;

int main(){
	char str[100];
	int count[256]={0};
	cout<<"Enter your string"<<endl;
	cin>>str;
	for(int i=0;str[i]!='\0';i++){
		count[str[i]]++;
	}
	for(int i=0;i<256;i++){
		(count[i]!=0)?cout<<char(i)<<" "<<count[i]<<endl:cout<<"";
	}
	cout<<endl;
	return 0;
}

