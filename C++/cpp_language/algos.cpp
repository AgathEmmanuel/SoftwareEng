#include <algorithm>
#include <iostream>
#include <string>
using std::sort;
using std::string;
using std::count;
using std::cout;

int main()
{
    std::vector<int> numbers;
    for (int i=0;i<10;i++)
    {
        numbers.push_back(i);
    }
    for (auto item : numbers)
    {
        cout << item << " ";
    }
    cout << '\n';
    cout << numbers.size() << '\n';
    

    std::vector<string> words;
    for (int i=0;i<4;i++)
    {
        std::string ss;
        std::cin >> ss;
        words.push_back(ss);
    }
    for (auto item : words)
    {
        cout << item << " ";
    }
    cout << '\n';
    cout << words[1] << '\n';

    //looping usin iterators
    for (auto i=begin(words);i!=end(words);i++)
    {
        cout << *i << " ";
    }
    cout << '\n';
    sort(begin(words),end(words));
    for (auto item : words)
    {
        cout << item << " ";
    }
    cout << '\n';
}