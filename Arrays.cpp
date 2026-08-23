#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    // Element at any particular index
    cout << "Element at 2nd index -> " << a.at(2) << endl;
    // Is array empty or not?
    cout << "Is array empty -> " << a.empty() << endl;
    // First element of the array
    cout << "First element -> " << a.front() << endl;
    // Last Element of the Array
    cout << "Last Element -> " << a.back() << endl;
    return 0;
}
