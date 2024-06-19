#include<iostream>
#include<vector>
using namespace std;

    struct students
    {
         string imie;
         string nazwisko;
         string nrAlbumu;
         string kierunek;
        int nrSemestru;
        double srednia;
    }; // define global struct type
     students studentStruct;
     vector<students> tablicaStudentow;
    string endTag;
      
