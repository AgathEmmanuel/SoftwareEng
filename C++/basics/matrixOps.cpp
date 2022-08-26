#include <iostream>
using namespace std;


int main(){
	int m,n;
	cin>>m>>n;
	int mat1[m][n],mat2[m][n],mat3[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		       cin>>mat1[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		       cin>>mat2[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		       mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		       cout<<mat3[i][j]<<" ";
		}
	}
	cout<<endl;
}



