#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int bryla,promienKuli,a,b,c,promienStozka,wysokoscStozka,promienWalca,wysokoscWalca;
        int tworzaca = (promienStozka*promienStozka)+(wysokoscStozka*wysokoscStozka);

    cout << "Wybierz bryle do obliczen       " << endl;
    cout << "1 - KULA                        " << endl;
    cout << "2 - PROSTOPADLOSCIAN            " << endl;
    cout << "3 - STOZEK                      " << endl;
    cout << "4 - WALEC                      " << endl;
    cin >> bryla;
    cout << bryla;

    switch(bryla)
    {
    case 1:
        cout << "\nPodaj promien kuli" << endl;
        cin >> promienKuli;
        cout << "\n Objetosc kuli wynosi: " << ((pow(promienKuli,3))*3.14*4)/3 << endl;
        cout << "\n Pole powierzchni kuli wynosi: " << (pow(promienKuli,2))*4*3.14 << endl;
        break;
    case 2: cout << "Podaj kolejno bok a,b,c" << endl;
        cin >> a >> b >> c;
        cout << "\n Objetnosc prostopadloscianu wynosi: " << a*b*c << endl;
        cout << "\n Pole powierzchni prostopadloscianu wynosi: " << 2*(a*b+a*c+c*b) << endl;
        break;
    case 3: cout << "\n Podaj kolejno promien i wysokosc stozka" << endl;
        cin >> promienStozka >> wysokoscStozka;
        cout << "Objetosc stozka wynosi: " << (3.14*(pow(promienStozka,2))*wysokoscStozka)/3;


        cout << "\n Pole powierzchni stozka wynosi: " << (3.14*pow(promienStozka,2))+(3.14*promienStozka*sqrt(tworzaca));
        break;
    case 4:
        cout << "Podaj kolejno promien oraz wysokosc walca " << endl;
        cin >> promienWalca >> wysokoscWalca;
        cout << "\n Objetosc walca to: " << (3.14*(pow(promienWalca,2)))*wysokoscWalca;
        cout << "\n Pole powierzchni walca to: " << (3.14*(pow(promienWalca,2)))+((3.14*(p)))*wysokoscWalca;

    }
    return 0;
}
