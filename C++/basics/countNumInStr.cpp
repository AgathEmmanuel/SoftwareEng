#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int num_sum(string str){
	string temp="";
	int sum=0;
	for(char ch:str){
		if(isdigit(ch))
			temp+=ch;
		else{
			sum+=atoi(temp.c_str());
			temp="";
		}
	}
	return sum+atoi(temp.c_str());
}

int main(){
	string str;
	cout<<"Enter string ";
	cin>>str;
	cout<<num_sum(str)<<endl;
	return 0;
}
