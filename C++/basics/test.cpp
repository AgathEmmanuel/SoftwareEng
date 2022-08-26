
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	cout<<"Please enter your name \n";
	getline(cin,input);
	cout<<"what you said is --"<<input<<"---"<<endl;
	string str="aga";
	string num="123";
	int int_num;
	int_num=atoi(num.c_str());
	int_num++;
	cout<<int_num<<endl;

	cout<<(str+"ab")<<endl;
	cout<<char(1)<<endl;
	return 0;
}
