#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> mystack;
    stack<int> mysecondstack;
    // push function
    mystack.push(1); // insert 1 to mystack
    mystack.push(2); // insret 2 to mystack
    mystack.push(3); // insert 3 to mystack
    mystack.push(4); // insert 4 to mystack
    mysecondstack.push(12);
    //  size function there are 4 here since we have inser 4 number
    cout
        << mystack.size() << endl; // output = 4
    //  pop function
    mystack.pop(); // delete to top one is 4
    mystack.emplace(5);
    mysecondstack.swap(mystack);

    //  top  function
    cout
        << mysecondstack.top() << endl; // output = 3
    // empty function ret un true if it's empty or false if not
    cout << mystack.empty(); // output =  0
    return 0;
}