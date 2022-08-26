/*Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, 
with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they 
can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential
 time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no 
 resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

Certain functions associated with the vector are:
Iterators
Capacity
Element Access
Modifiers
*/

// C++ program to illustrate the 
// iterators in vector 
#include <iostream> 
#include <vector> 
  
using namespace std; 

int main(){
    vector<int>aguu;

    aguu.push_back(9999);
    aguu.push_back(7);
    aguu.push_back(5);
    aguu.push_back(9);
    for(unsigned int i=0;i<aguu.size();i++){   cout<<aguu[i]<<" ";}
    cout<<endl;

    cout<<aguu.at(2)<<endl;
    cout<<aguu.size()<<endl;
    aguu.insert(aguu.begin()+2,10);

    for(int i=0;i<aguu.size();i++){   cout<<aguu[i]<<" ";}
    cout<<endl;

    aguu.erase(aguu.begin()+1);

    for(int i=0;i<aguu.size();i++){   cout<<aguu[i]<<" ";}
    cout<<endl;

    aguu.empty()?cout<<"empty":cout<<"not empty";
    cout<<endl;
    
    aguu.clear();
    aguu.empty()?cout<<"empty":cout<<"not empty";


    return 0;
}
