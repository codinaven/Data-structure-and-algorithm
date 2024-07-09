#include<iostream>
using namespace std;

int main(){
    //declare
    int number[15];
    cout<<"vlaue at 15 index"<<number[4]<<endl;
    cout<<endl<<"everything is fine"<<endl;
    int size = 10;
    int value = 1;
    int array[size];
    
    // Initializing array elements
    for (int i = 0; i < size; ++i) {
        array[i] = value;
        cout<<array[i]<<endl;
    }
    
    // // Printing array
    // for (int i = 0; i < size; ++i) {
    //     cout << array[i] << " ";
    // }
    //cout << endl;
    return 0;
}