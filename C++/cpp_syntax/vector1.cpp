/*arrays are always passed by reference by default
 but vectors are not and if are going to fill it up with stuff
 we are gonna pass it by reference ,so we add & sign.
 And We should alway pass your vectors in by reference because 
 vectors are very large in size in  memmory ,so if we pass in by 
 value everytime you do in that function you are going to be making
 a duplicate which is going to take up all the massive space
 so even if you dont plan to make changes to it still pass in to it 
 by referenes
 Now if you want to keep it from bein tampered with in functions that
 arent ment to make any changes to it ,throw a constant modifier in 
 front of it , but in the below case we want to modify it so we are not
 going to add  "void fillvector(const vector<int>&)"   */
 #include<iostream>
 #include<vector>
 using namespace std;
 void fillVector(vector<int>&);
 void printVector(const vector<int>&);

 int main(){
     vector<int>myVector;
     fillVector(myVector);
     printVector(myVector);

 }
 void fillVector(vector<int>& newVector){
     cout<<"type a list of numbers";
     int ain;
     while(ain != 99){newVector.push_back(ain);cin>>ain;}
     cout<<endl;
 }
 void printVector(const vector<int>& newVector){
     cout<<"Vector: ";
     for(unsigned int i=0;i<newVector.size();i++){cout<<newVector[i]<<" ";}
     cout<<endl;
     
 }
