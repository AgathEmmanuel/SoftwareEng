#include <iostream>
using namespace std;

void vowel(char ch){
	switch(ch){
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':cout<<"Vowel"<<endl;
			break;
		default:cout<<"Consonat"<<endl;
	}
}
int main(){
	char c;
	cout<<"\nInput character";
	cin>>c;
	vowel(c);
	return 0;
}

