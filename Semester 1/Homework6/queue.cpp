#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> myqueue;       // Create object of queue call myqueue
    queue<int> mysecondqueue; // Create object of queue call mysecondqueue
    // push function
    myqueue.push(1);       // insert 1 to myqueue
    myqueue.push(2);       // insret 2 to myqueue
    myqueue.push(3);       // insert 3 to myqueue
    myqueue.push(4);       // insert 4 to myqueue
    myqueue.push(5);       // insert 5 to myqueue
    myqueue.push(6);       // insert 6 to myqueue
    mysecondqueue.push(7); // insert 4 to  mysecondqueue
    mysecondqueue.push(8); // insert 5 to  mysecondqueue
    mysecondqueue.push(9); // insert 6 to  mysecondqueue
    // empty function ret un true if it's empty or false if not
    cout << myqueue.empty() << endl; // output =  0

    //  size function there are 4 here since we have inser 6 number
    cout << myqueue.size() << endl; // output = 6

    // swap function
    mysecondqueue.swap(myqueue);          // swap element mysecondqueue  with myqueue
    cout << mysecondqueue.back() << endl; // output=6 // element 1->6
    cout << myqueue.back() << endl;       // output=9 // element 7->9
    // emplace function

    myqueue.emplace(7); // add 7 in the end  of the queue

    // front function

    cout<<myqueue.front()<<endl; // output = 7 is front of queue

    // back funtcion

    cout<<myqueue.back()<<endl;//output = 7

    //  pop function
    myqueue.pop(); // delete the top one is 9

    return 0;
}