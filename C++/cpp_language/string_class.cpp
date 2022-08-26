#include <iostream>

using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
    string name;
    cout << "Pleas enter your name. ";
    cin >> name;
    cout << "Helllo.." + name << '\n';
    int nlen=name.length();
    string snlen=std::to_string(nlen);
    cout << "Name length is "+ snlen << '\n';
    return 0;
}