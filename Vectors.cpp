#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5, 1); //Here 5 is the size of vector and all 5 elements initialises with 1
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    //Capacity = It tells how much storage vector covering 
    cout << v.capacity() << endl;
    v.push_back(1);
    
    cout << v.capacity() << endl;
    v.push_back(3);

    cout << v.capacity() << endl;
    v.push_back(4);
    cout << v.capacity() << endl;
    cout << "Size : " << v.size() << endl;
    
    // Most of operations same as arrays like
    cout << "Elements at particular index : " << a.at(0) << endl;
    
    cout << "Is Vector empty : " << a.empty() << endl;

    cout << "First Element : " << a.front() << endl;

    cout << "Last Element : " << a.back() << endl;

    // Before Pop Back(deleting element from the last) 
    v.pop_back();
    cout << v.capacity() << endl;
    cout << v.size() << endl;

    return 0;

}