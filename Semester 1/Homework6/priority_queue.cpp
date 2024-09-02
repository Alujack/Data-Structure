#include <iostream>
#include <queue>
using namespace std;
int main()
{
    std::priority_queue<int> mypriority;       // Create object of queue call mypriority
    std::priority_queue<int> mysecondpriority; // Create object of queue call mysecondpriority
    // push function
    mypriority.push(2);       // insert 2 to mypriority
    mypriority.push(1);       // insret 1 to mypriority
    mypriority.push(5);       // insert 5 to mypriority
    mypriority.push(4);       // insert 4 to mypriority
    mypriority.push(6);       // insert 6 to mypriority
    mypriority.push(3);       // insert 3 to mypriority
    mysecondpriority.push(9); // insert 9 to  mysecondpriority
    mysecondpriority.push(7); // insert 7 to  mysecondpriority
    mysecondpriority.push(8); // insert 8 to  mysecondpriority
    // empty function ret un true if it's empty or false if not
    cout << mypriority.empty() << endl; // output =  0

    //  size function there are 4 here since we have inser 4 number
    cout << mypriority.size() << endl; // output = 6

    //  top function return the highest element in the priority queue
    cout<<mypriority.top( )<<endl;//output=6

    // swap function
    mysecondpriority.swap(mypriority);          // swap element mysecondpriority  with mypriority

    // emplace function

    mypriority.emplace(5); // add 5 in the end  of the queue

    //  pop function
    mypriority.pop(); // delete the top one is 9
    cout << mypriority.top() << endl; // output=6

    return 0;
}