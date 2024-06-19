#include <iostream>

using namespace std;

int main()
{
    int poziom;
    char orientacja;
    cout << "Podaj ilosc poziomow" << endl; // stoi normaalnie czy do gory nogami
    cin >> poziom;
    cout << "\nG - Gora" << endl;
    cout << "D - Dol" << endl;
    cin >> orientacja;

    if(orientacja == 'D'){
        int spacje = poziom-1;

    for(int i = 1;i<=poziom;i++)
    {
     for(int l=poziom-i;l>=1;l--){
            cout << " ";
        }
        for(int k=1;k<=i;k++)
        {
            cout << "*";
            cout << " ";

        }
        cout << endl;
    }

    }

   if(orientacja == 'G'){
        int spacje = poziom-1;

    for(int i = 1;i<=poziom;i++)
    {
     for(int l=1;l<=i;l++){
            cout << " ";
        }
        for(int k=poziom-i;k>=1;k--)
        {
            cout << "*";
            cout << " ";

        }
        cout << endl;
    }

    }



    return 0;
}
