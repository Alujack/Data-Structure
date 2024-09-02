#include <iostream>
using namespace std;
int Dsearch(int A[], int n, int key)
{
    int i;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "found there are " << count << " element in array";
    }
    else
    {
        cout << "there is no element";
    }
}
int main()
{
    int A[] = {12, 34, 56, 74, 11, 13, 10, 20, 20, 20, 20};
    int key = 20;
    Dsearch(A, 11, key);
}