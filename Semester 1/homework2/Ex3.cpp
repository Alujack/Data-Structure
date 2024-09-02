#include <iostream>
using namespace std;
int RBsearch(int A[], int l, int h, int key)
{
    int curin = (l + h) / 2;
    if (A[curin] < key)
    {
        return RBsearch(A, curin + 1, h, key);
    }
    else if (A[curin] > key)
    {
        return RBsearch(A, l, curin - 1, key);
    }
    return curin;
}
int IBsearch(int A[], int l, int h, int key)
{
    int curin;
    while (l < h)
    {
        curin = (l + h) / 2;
        if (A[curin] > key)
        {
            h = curin - 1;
        }
        else if (A[curin] < key)
        {
            l = curin + 1;
        }
        else
        {
            return curin;
        }
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 9; // key search
    cout << "the element found  at index " << RBsearch(A, 0, 8, key) << " of array" << endl;
    cout << "the element found  at index " << IBsearch(A, 0, 8, key) << " of array";
}