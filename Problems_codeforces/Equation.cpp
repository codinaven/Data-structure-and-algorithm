#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
void Equation(double A, double B, double C)
{
    int D = pow(B, 2) - (4 * A * C);
    if (D >= 0)
    {
        double x = ((-B + pow(D, 0.5)) / 4 * A);
        double y = ((-B - pow(D, 0.5)) / 4 * A);
        if (x < y)
        {
            cout << x << endl
                 << y << endl;
        }
        else
        {
            cout << y << endl
                 << x << endl;
        }
    }
    if (D < 0)
    {
        // Calculate real and imaginary parts of complex roots
        double realPart = -B / (2 * A);
        double imagPart = sqrt(abs(D)) / (2 * A);
        double x=realPart+imagPart;
        double y=realPart-imagPart;
        if (x < y)
        {
            cout << x << endl
                 << y << endl;
        }
        else
        {
            cout << y << endl
                 << x << endl;
        }
    }
    if((-B + pow(D, 0.5)==0)||(-B - pow(D, 0.5)==0)){
          cout<<"-1"<<endl;
    }

}
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
Equation(A,B,C);
    return 0;
}