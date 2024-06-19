#include <iostream>

using namespace std;

int main()
{
    float ocena;
    float iloscOcen;
    float sumaOcen=0;
    float sredniaOcen;
     cout << "Podaj ilosc ocen, ktora chcesz wprowadzic" << endl;
    do{
         cin >> ocena;
         sumaOcen += ocena;
         if(ocena>0) iloscOcen++;
    }while(ocena!=0);
    // niech podaje, w momencie podania zero konczy podawanie ocen


    sredniaOcen = sumaOcen/iloscOcen;

        if(sredniaOcen>4.1) cout << "Kwalifikujesz sie na stypendium, twoja srednia to: " << sredniaOcen << endl;
        else{
            cout << "Nie kwalifikujesz sie " << sredniaOcen ;
        }


    return 0;
}
