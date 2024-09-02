#include <iostream>


int binarySearch(int arr[], int key, int l, int h)
{
    int mid = (h + l) / 2; // mid point calcualtion

    if (arr[mid] > key)
    {
        binarySearch(arr, key, l, mid - 1); // call binarySearch(arr key l, change h to mid -1 ) because mid < key
    }
    else if (arr[mid] < key)
    {
        binarySearch(arr, key, mid + 1, h); // call binarySearch(arr key ,change l to mid + 1 , h) because mid < key
    }
    else
    {
        return mid; // after arr[mid] == key return that mid
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    std::cout << binarySearch(arr, 6, 0, 8);
}