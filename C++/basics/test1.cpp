#include <iostream>
using namespace std;


int main(){
	int a[6];
	for(int i=0;i<6;i++){
		cin>>a[i];
	}
	int b[a[4]],c[a[5]];
	for(int i=0;i<a[4];i++){
		cin>>b[i];
	}
	for(int i=0;i<a[5];i++){
		cin>>c[i];
	}

/*
	cout<<"values you entered "<<endl;
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	for(int i=0;i<a[4];i++){
		cout<<b[i]<<" ";
	}
	for(int i=0;i<a[5];i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
*/
	int d[a[4]],e[a[5]];
	int sumo=0,suma=0;
	for(int i=0;i<a[4];i++){
		d[i]=a[2]+b[i];
		(d[i]>=a[0] && d[i]<=a[1])?suma++:suma=suma;
	}
	for(int i=0;i<a[5];i++){
		e[i]=a[3]+c[i];
		(e[i]>=a[0] && e[i]<=a[1])?sumo++:sumo=sumo;
	}
	cout<<suma<<endl;
	cout<<sumo<<endl;
		
	return 0;
}

