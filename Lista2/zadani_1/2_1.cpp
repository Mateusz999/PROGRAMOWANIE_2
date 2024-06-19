#include <iostream>

using namespace std;
// ZADANIE 1 // ile chcecie czekac i ile zarobimy w tym czasie
float okresOszczedzania(float kapital, float procent, int okres ,int oczekiwana){
    procent = procent/100;
    float okresK = 12/okres;
    int iloscOkresow =0;

    while(iloscOkresow < oczekiwana){
        kapital += (kapital*((procent/12)*okresK));

        iloscOkresow++;
    };
        return kapital;
    
       
}

//ZADANIE 2
void wypelnij(int tab[],int rozmiar){
        for(int i = 0;i<rozmiar;i++){
            cout << "\nWprowadz wartosc nr " << i+1 <<" ";
            cin >> tab[i];
            cout << endl;
        }
};

void szukaj (int tab[], int rozmiar,int &minimum, int &maksimum,int &minimumIndex,int &maksimumIndex){
     minimum = tab[0];
      maksimum = tab[0];
     minimumIndex =0;
     maksimumIndex =0;

    for(int i =1;i<rozmiar;i++){

        (maksimum > tab[i])? maksimum: maksimum = tab[i];
        (minimum < tab[i])? minimum: minimum = tab[i];

        (maksimum > tab[i])? maksimumIndex: maksimumIndex = i;
        (minimum < tab[i])? minimumIndex: minimumIndex = i;
    }




}
int liczSrednia(int tab[], int rozmiar, int srednia){
      for(int i =0;i<rozmiar;i++){
        srednia +=tab[i];

      }
      srednia = srednia/rozmiar;
      return srednia;
}

int zwroc(int tab[], int rozmiar, int podajNum){
      for(int i =0;i<rozmiar;i++){

            if(podajNum == tab[i]) return i;

      }


}



int main()
{
    int numer;

    cout << "1 - Kapitalizacja" << endl;
    cout << "2 - Tablica" << endl;
        cout << "Podaj nr zadania > ";
        cin >> numer;

    switch(numer){
        case 1: float kapital;
                float procent;
                int okres;
                int oczekiwana;
                cout << "Podaj Kapital poczatkowy > ";
                cin >> kapital;
                cout << "\n Podaj procent > ";
                cin >> procent;
                cout << "\n Podaj okres kapitalizowania odsetek > ";
                cin >> okres;
                cout << "\n Podaj ilość  okresow kapitalizacyjnych jaka chcesz czekac > ";
                cin >>oczekiwana;
                cout << "w tym okresie zarobisz " <<okresOszczedzania(kapital,procent,okres,oczekiwana) << "  ";
                break;

        case 2: int rozmiar=15;
                int tab[rozmiar];
                int minimum,maksimum,minimumIndex,maksimumIndex;
                int podajNum;
                float srednia =0;
                wypelnij(tab,rozmiar);
                szukaj(tab,rozmiar,minimum,maksimum,minimumIndex,maksimumIndex);
                cout << "\n Wartosc najmniejsza " << minimum << " [ "<< minimumIndex << " ] " << endl;
                cout << "Wartosc najwieksza " << maksimum << " [ "<< maksimumIndex << " ] " << endl;
                cout << "Srednia wartosc " << liczSrednia(tab,rozmiar,srednia) << endl;
                cout << "Podaj liczbe, ktora ma zwrocic ";
                cin >> podajNum;
                cout <<  "\nIndeks to: "<<zwroc(tab,rozmiar,podajNum);
                break;



    }

    return 0;
}
