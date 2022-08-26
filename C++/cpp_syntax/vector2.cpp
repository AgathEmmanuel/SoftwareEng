#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums;
    int ai;
    for(int a=0;a<3;a++){cin>>ai;nums.push_back(ai)>>" ";}
    for(int b=0;b<nums.size();b++){cout<<nums[b]<<" ";}
    cout<<endl;
    for(int b=nums.size()-1;b>=0;b--){cout<<nums[b]<<" ";}
    cout<<endl;
    return 0;
    
}