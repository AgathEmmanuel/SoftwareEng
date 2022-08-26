#include <iostream>
#include <cmath>
//#include <math.h>>

using namespace std;

int main(){
	float area,radius;
	cout<<"enter the radius: ";
	cin>>radius;
	area=M_PI*radius*radius;
	cout<<area;
	return 0;
}

//g++ helloworld.cpp -o helloworld.exe
//  this command works properly even with cmath or math.h
//
//g++ -std=c++17 helloworld.cpp -o helloworld.exe
//  this command do not work properlywith cmath or math.h
//
//g++ -std=c++17 helloworld.cpp -lm -o helloworld.exe
//
//This command needs to be used to compile the program from the
//command line as this contains <math.h> header file

