//for tutorials : https://www.youtube.com/watch?v=L7VFlpbj7Zc
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string>v1 {"agu","jossu","meer"};
    vector<int>v2{1,2,3};
    vector<char>v3(5);//creates a 5 element char vector
    vector<int>v4(6,2);//crreates 5 element int vector with 2 stored in each place
    vector<string>v5(3,"Hello");
    cout<<v5[0]<<endl;
    
}