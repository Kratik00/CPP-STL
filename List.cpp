#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    list<int> n(5, 100);
    l.push_back(3);
    l.push_front(1);

    for (int i : l)
    {
        cout << i <<" ";
    }
    cout << endl;
    for (int i : n)
    {
        cout << i <<" ";
    }
    cout << endl;
    l.erase(l.begin());

    for (int i: l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "List Size: " << l.size() << endl;


}