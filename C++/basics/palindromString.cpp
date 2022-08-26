#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
	string s,rev="";
	int i;
	cout<<"Enter the string ";
	getline(cin,s);
	i=s.length();
	for(int j=0;j<i;j++){
		rev+=s[i-j-1];
	}
	cout<<rev<<endl;
	(s==rev)?cout<<"palindrome":cout<<"not palindrome";
	cout<<endl;
	return 0;
}

	

