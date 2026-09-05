#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    d.push_back(3);
    d.pop_back();
    cout << endl;

    cout << "First index Element : " << d.front() << endl;
    cout << "Last index Element : " << d.back() << endl;

    cout << "Any particular Index Element: " << d.at(1);

    cout << "Is Deque empty ? " << d.empty() << endl;

    cout << "Before Erasing : " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "After Erasing : " << d.size() << endl;
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    
    return 0;

}