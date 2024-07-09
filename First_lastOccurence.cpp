#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        mid = (e - s) / 2;
    }
    return ans;
}
int lastocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        mid = (e - s) / 2;
    }
    return ans;
}
int main()
{ 
    int even[4]={};

    return 0;
}