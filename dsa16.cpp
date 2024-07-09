// Find first n natural number
//  #include <iostream>
//  using namespace std;
//  int add;
//  int Sum(int n)
//  {
//      add = (n * (n + 1) / 2);
//      return add;
//  }
//  int main()
//  {
//      int s;
//      cin >> s;
//      Sum(s);
//      cout << add;
//      return 0;
//  }
// check pytagoras triple let
// #include <iostream>
// #include <cmath>
// using namespace std;
// bool pytagoras(int p, int b, int h)
// {
//     if (sqrt(p) + sqrt(b) == sqrt(h))
//     {
//         return true;
//     }
//     else
//     {
//         cout << "this is not an right angle triangle " << endl;
//         return false;
//     }
// }
// int main()
// {
//     int a, b, c;
//     cin >> a;
//     cin >> b;
//     cin >> c;
//     if (pytagoras(a, b, c))
//     {
//         cout << "This is a pythagoras triangle" << endl;
//     }
//     return 0;
// }
// BINARY CONVERSION QUESTION ARE PENDING I WILL DONE IT LATE AFTER LEARNING BINARY CONVERSION FROM VIDEO 16
#include <iostream>
using namespace std;
class employee
{
private:
    int age;
    char name[30];

public:
    void getdata();
    void putdate();
};
void employee::getdata()
{
    cout << "enter the age of the employee" << endl;
    cin >> age;
    cout << "enter the name of the employee" << endl;
    cin >> name;
}
void employee::putdate(){
    cout<<"name"<<name<<endl;
    cout<<"age"<<age<<endl;
}
int size=3;
int main()
{    employee manager[size];
    for(int i=0;i<=size;i++){
        cout<<"enter the detail of manager "<< i+1<<endl;
               manager[i].getdata();
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        manager[i].putdate();
    }

    return 0;
}