#include<iostream>
#include<vector>
#include "library.cpp"

#include <string>
using namespace std;

int main() {

 show();
    cout << "\nPodaj wartosc : ";
    cin >> param;
    vectorParameter();
    cout << "\nMin Element = " << result[0] << " o indeksie : " << result[2] << endl;
    cout << "\nMax Element = " << result[1] << " o indeksie : " << result[3] << endl;
    cout << "Srednia indeksu to : " << result[4];

   // cout << "\nIndeks wartości: " << param << " to : " << result[5];
    return 0;
};
