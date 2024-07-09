#include <iostream>
using namespace std;

int main()
{
    int type;
    cin >> type;
    char realname[6] = {'T', 'i', 'm', 'u', 'r', '\0'};
    for (int i = 0; i <= type; i++)
    {
        int Nletter;
        cin >> Nletter;
        if(Nletter<5 || Nletter>5){
            cout<<"NO"<<endl;
        }
        char name[Nletter];
        for (int i = 0; i < Nletter; i++)
        {
            cin >> name[i];
        }

        for (int j = 0; j <= Nletter; j++)
        {
            for (int k = 0; k <= Nletter; k++)
            {
                if (realname[j] == name[Nletter])
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}