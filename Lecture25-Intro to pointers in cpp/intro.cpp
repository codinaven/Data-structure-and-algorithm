#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;
    // address fo operator -&
    cout << "address fo num" << &num << endl;
    int *ptr=&num;
    cout<< "value of num"<<*ptr<<endl;
    cout<< "address is "<<ptr<<endl;
    double d=4.3;
    double*p2 =&d;
    cout<<"address is :"<<p2<<endl;
    cout<<"value is:"<<*p2<<endl;
    return 0;
}