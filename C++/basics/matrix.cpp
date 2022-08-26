#include <iostream>
using namespace std;


int main(){
	int mat[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}

