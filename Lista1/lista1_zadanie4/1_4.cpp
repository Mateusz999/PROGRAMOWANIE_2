#include <iostream>
#include <string>
using namespace std;

int main()
{
    string zdanie;
    char podzial;
    char znak;

    cout << "wpisz ciag znakow > ";
    getline(cin, zdanie);
    cout << "\n Podaj znak podzialu > ";
    cin.get(podzial);
    cout << "\n Podaj znak pomijany > ";
    cin >> znak;
    system("cls");
    int dlugoscZdania = zdanie.length();
    int literyBezSpacji =0;
    int literyBezZnaku=0;


    for(int i=0;i<dlugoscZdania;i++)
    {
      int codeAscii = zdanie[i];
      char litera = zdanie[i];
      if(codeAscii != 32 ) literyBezSpacji++;
      if (litera!= znak) literyBezZnaku++;

    }
    cout << "\n liter bez spacji: > " << literyBezSpacji;
    cout << "\n liter ze spacja: > " << dlugoscZdania;
    cout << "\n liter bez  znaku specjalnego: > " << literyBezZnaku;
    cout << "\n\n\n";
    int index=0;
    int rozmiar=1;

      for(int j=0;j<dlugoscZdania;j++)
    {
         int codeAscii = zdanie[j];
         int podzialAscii = podzial;
        if(codeAscii == podzialAscii) rozmiar++;
    }

      string* tablica = new string[rozmiar];
  for(int i=0;i<dlugoscZdania;i++)
    {
      int codeAscii = zdanie[i];
      char litera = zdanie[i];

      if(codeAscii !=podzial )
      {

          tablica[index] += zdanie[i];
      }
      else {

           index++;
      }

    }
 cout<< "\n\n";

    cout << " Wyniki operacji separowania wyrazow i zapisu do tablicy dynamicznej o rozmiarze " << rozmiar << endl;

       for(int a=0;a<rozmiar;a++){

        cout << tablica[a] << endl;
    }


    return 0;
}
