#include <iostream>
using namespace std;
int NDsearch(int A[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            break;
        }
    }
    if (i < n)
    {
        cout << "found";
    }
    else
    {
        cout << "there is no element";
    }
}
int main()
{
    int A[] = {12, 34, 56, 74, 11, 13, 10, 20};
    int key = 11;
    NDsearch(A, 8, key);
}