#include <iostream>
#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;


void capitalize(string s){
	string temp=" ";
	s[0]=s[0]-32;
	for(int i=1;s[i]!='\0';i++){
		if(isalpha(s[i])){
			(s[i-1]==temp[0])?s[i]-=32:s[i]=s[i];
			//ISO C++ forbids comparison between pointer 
			//and integer [-fpermissive]| [c++]
			//So we use a temp and use pointer on it

		}
		else
			s[i]=s[i];
	}
	cout<<s<<" Agath "<<endl;
	
}

int main(){
	string input;
	cout<<"Enter the sentence ";
	getline(cin,input);
	capitalize(input);
	return 0;
}




	


