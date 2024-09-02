#include <iostream>
using namespace std;
void insertionSortA(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = A[i];              // store key value for insertion
        int j = i - 1;               // scan before i
        while (j >= 0 && key < A[j]) // scan and check front element
        {
            A[j + 1] = A[j]; // shift the element
            j--;
        }
        A[j + 1] = key; // change key to the new one
    }
}
void insertionSortD(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = A[i];              // store key value for insertion
        int j = i - 1;               // scan front i
        while (j >= 0 && key > A[j]) // scan and check front element
        {
            A[j + 1] = A[j]; // shift the element
            j--;
        }
        A[j + 1] = key; // change key to the new one
    }
}
int main()
{
    int A[] = {34, 21, 56, 12, 4, 7, 90, 11, 1, 3};
    // insertionSortA(A, 10);
    insertionSortD(A, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << ", ";
    }
}
