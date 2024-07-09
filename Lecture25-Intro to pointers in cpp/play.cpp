#include <iostream>
using namespace std;

int main()
{
    // pointer to int is created with and pointing to some garbage address
    //  int *p=0;
    //  cout<<*p<<endl;
    
// cout<<*P<<endl;
int num=5;
int a=num;
cout<<"a before"<<num<<endl;
a++;
cout<<"a after "<<a<<endl;
int *p=&num;
cout<<"before "<<num<<endl;
(*p)++;
cout<<"after"<<num<<endl;
//coping a pointer
int *q=p;
cout<<p<<"-"<<q<<endl;
cout<<*p<<"-"<<*q<<endl;



    return 0;
}