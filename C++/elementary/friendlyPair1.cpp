#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"Enter numbers ";
	cin>>num1;
	cin>>num2;
	int sum1=0,sum2=0;
	for(int i=1;i<num1;i++)
	{
		(num1%i==0)?sum1=sum1+i:sum1=sum1;
	}
	for(int i=1;i<num2;i++)
	{
		(num2%i==0)?sum2=sum2+i:sum2=sum2;
	}
	if(sum1==num1 && sum2==num2)
		cout<<"Friendly Pair"<<endl;
	else
		cout<<"Not Friendly Pair"<<endl;
	return 0;
}
