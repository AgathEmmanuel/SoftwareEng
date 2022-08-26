#include <iostream>
using namespace std;


int hcf(int a,int b){
	int hcff,final_hcf;
	for(hcff=1;hcff<a && hcff<b;hcff++){
		(a%hcff==0 && b%hcff==0)?final_hcf=hcff:hcff=hcff;
	}
	return final_hcf;
}

int main(){
	int fn1,fn2,fd1,fd2,frn,frd,hcfr;
	cout<<"Enter 1st fraction ";
	cin>>fn1>>fd1;
	cout<<"Enter 2nd fraction ";
	cin>>fn2>>fd2;
	frn=(fn1*fd2+fn2*fd1);
	frd=(fd2*fd1);
	hcfr=hcf(frn,frd);
	cout<<(frn/hcfr)<<"/"<<(frd/hcfr)<<endl;
	return 0;
}



