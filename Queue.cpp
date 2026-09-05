#include <iostream>
#include <queue> //First in first out

using namespace std;

int main()
{
    queue<string> q;
    q.push("Raman");
    q.push("Rohan");
    q.push("Mohan");
    cout << "First ElementL: " << q.front() << endl;
    q.pop(); //Deleting element from starting
    cout << "After popping out first element - ";

    cout << "First ElementL: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl;
}