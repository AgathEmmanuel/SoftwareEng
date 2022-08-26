#include <iostream> 
#include <array>
using namespace std; 
  
int main() 
{ 
    array<int,5> myarray{ 1, 2, 3, 4, 5 }; 
    int arr[6]={1,2,3};


    cout << myarray.size()<<endl; 

    int len=sizeof(arr)/sizeof(arr[0]);

    int len_pointer=*(&arr+1)-arr;
    //The value contained in *(&arr + 1) is the address after 5 elements
    //in the array. The value contained in arr is the address of the 
    //starting element in array. So their subtraction results in the 
    //length of the array

    cout<<endl;
    cout <<len<<endl; 
    cout <<len_pointer<<endl; 
    cout<<endl;
    return 0; 
} 
