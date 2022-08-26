#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int custom_max(int arr[],int n){
	int max=0;
	for(int i=0;i<n;i++){
		(max<arr[i])?max=arr[i]:max=max;
	}
	return max;
}

		
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"output of custom_max is "<<custom_max(arr,n)<<endl;
 
    sort(arr, arr + n);
 
    cout << "Array after sorting using sort() is "<<endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout<<endl;
    cout<<"max element is: "<<arr[n-1]<<endl;
    cout<<"min element is: "<<arr[0]<<endl;
 
    return 0;
}
