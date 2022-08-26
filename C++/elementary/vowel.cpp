#include <iostream>
using namespace std;

void vowel(char ch){
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		cout<<"Vowel"<<endl;
	else
		cout<<"Consonat"<<endl;
}

int main()
{
	char c;
	cout<<"\nInput a character:";
	cin>>c;
	vowel(c);
	return 0;
}

