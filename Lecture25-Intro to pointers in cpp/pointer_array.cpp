#include <iostream>
using namespace std;

int main()
{/*
    int arr[10] = {2, 5, 6};
    cout << "address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout << "address fo first memory block is " << &arr << endl;
    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th "  << *(arr) + 1 << endl;
    */
   int temp[10]={1,2};
   cout<<sizeof(temp)<<endl;
   cout<<"1st "<<sizeof(*temp)<<endl;
   cout<<"2nd "<<sizeof(&temp)<<endl;
   int *ptr=&temp[0];
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;
   cout<<sizeof(&ptr)<<endl;
    return 0;
}