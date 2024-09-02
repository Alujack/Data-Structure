#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int A[], int n, char pattern)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (pattern == 'A')
            {
                if (A[j] > A[j + 1])
                {
                    swap(A[j], A[j + 1]);
                }
            }
            else
            {
                if (A[j] < A[j + 1])
                {
                    swap(A[j], A[j + 1]);
                }
            }
        }
    }
}
int main()
{
    int A[] = {12, 34, 56, 23, 44, 5, 90, 1};
    bubbleSort(A, 8, 'A'); // A-> Ascending , D-> Descending
    for (int i = 0; i < 8; i++)
    {
        cout << A[i] << ", ";
    }
}