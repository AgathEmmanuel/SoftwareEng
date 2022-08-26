#include <iostream>
using namespace std;


void printPascal(int n){
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			(j==i || j==0)?a[i][j]=1:a[i][j]=a[i-1][j-1]+a[i-1][j];
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	printPascal(9);
	return 0;
}

