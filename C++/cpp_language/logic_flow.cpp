#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int int1=11;
    int int2=22;
    
    if(int1<int2)
    {
        cout << int2 << " is greater" << '\n';
    }
    else
    {
        cout << int1 << " is greater" << '\n';
    }
    for (int l=0;l<10;l++)
    {
        cout << l << " ";
    }
    cout << "\n";
    while(1)
    {
        int j;
        cout << "Pleas enter your number" << '\n';
        cin >> j ;
        cout << "Value you entered is " << j << '\n';
        cout << '\n';
    }

    // some logical kew works
    // switch
    // continue
    // break
    // range based for
    // do
    // goto
}