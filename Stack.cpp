#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s; //Last in first out

    s.push("Kratik");
    s.push("Kumar");
    s.push("Aarya");
    s.push("Saini");

    s.pop(); //For deleting element from last
    cout << "Top Element: " << s.top() << endl; //last
    cout << "Size of stack: " << s.size() << endl;
    cout << "Empty or not: " << s.empty() << endl;
}