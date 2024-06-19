#include<iostream>
#include<vector>
#include "header.h"
using namespace std;
students newStudent;
students editOne(vector<students>&tablicaStudentow,students &newStudent){

    cout << "Podaj imie : "; cin >> newStudent.imie;
    cout << "Podaj nazwisko : "; cin >> newStudent.nazwisko;
    cout << "Podaj numer albumu : "; cin >> newStudent.nrAlbumu;
    cout << "Podaj kierunek : "; cin >> newStudent.kierunek;
    cout << "Podaj numer semestru : "; cin >> newStudent.nrSemestru;
    cout << "Podaj srednia : "; cin >> newStudent.srednia;

    return newStudent;
};
void add(vector<students>&tablicaStudentow, students &newStudent){
      
    editOne(tablicaStudentow,newStudent);
    tablicaStudentow.push_back(newStudent);
}; 
void menu(){
    cout << "1. Dodaj studenta\n2. Usun studenta\n3. Edytuj Studenta";
    cout<<"\n4. Wyszukaj\n5. Pokaz tablice studentow 6.Wyszukaj do ocenach";
    cout << " Wybierz operacje, ktora chcesz wykonac\n";
};
void showStudents(){
        
    for(auto el : tablicaStudentow){
        cout <<"\nImie studenta : " <<el.imie<<endl;
        cout <<"Nazwisko studenta : " <<el.nazwisko<<endl;
        cout <<"Number albumu : " <<el.nrAlbumu<<endl;
        cout <<"Kierunek : " <<el.kierunek<<endl;
        cout <<"Numer semestru : " <<el.nrSemestru<<endl;
        cout <<"Srednia : " <<el.srednia<<endl;
    };
}; 
void showStudent(vector<students>&tablicaStudentow, int i){
    cout << "Imię : " << tablicaStudentow[i].imie<<endl;
    cout << "Nazwisko : " <<tablicaStudentow[i].nazwisko<<endl;
    cout << "Numer Albumu : " <<tablicaStudentow[i].nrAlbumu<<endl;
    cout << "Kierunek : " <<tablicaStudentow[i].kierunek<<endl;
    cout <<  "Srednia : "<<tablicaStudentow[i].srednia<<endl;
};
void ending(){
    cout << " Jesli chcesz zakonczyc program wpisz 'end' > ";
    cin >> endTag;
};
void deleteStudent(vector<students>&tablicaStudentow){
    int deleteCase;
    string parametr;
    cout << "Podaj paramer jaki chcesz podac by usunac studenta\n";
    cout <<"1. Imie\n2.Nazwisko\n3.Numer Albumu"<<endl;
    cout <<"4.Kierunek > ";
    cin >> deleteCase;
    switch(deleteCase){
        case 1:
            cout <<"Podaj imie : ";
            parametr="";
            cin >> parametr;
                for(int i=0;i<tablicaStudentow.size();i++){
                if(parametr == tablicaStudentow[i].imie)  tablicaStudentow.erase(tablicaStudentow.begin()+i);
                }
            break;
        case 2:
            cout <<"Podaj Nazwisko : ";
            parametr="";
            cin >> parametr;
               for(int i=0;i<tablicaStudentow.size();i++){
                if(parametr == tablicaStudentow[i].nazwisko) tablicaStudentow.erase(tablicaStudentow.begin()+i);
                    }
            break;
        case 3:
            cout <<"Podaj numer Albumu : ";
            parametr="";
            cin >> parametr;
                for(int i=0;i<tablicaStudentow.size();i++){
                    if(parametr == tablicaStudentow[i].nrAlbumu) tablicaStudentow.erase(tablicaStudentow.begin()+i);
                     }
            break;
        case 4:
            cout <<"Podaj kierunek : ";
            parametr="";
            cin >> parametr;
                for(int i=0;i<tablicaStudentow.size();i++){
                if(parametr == tablicaStudentow[i].kierunek)  tablicaStudentow.erase(tablicaStudentow.begin()+i);
                }
            break;
            };
            };
void editStudent(vector<students>&tablicaStudentow){
    int editCase;
    string parametr;
    cout << "Ktorego studenta chcesz edytować?\n";
    cout <<"1. Imie\n2.Nazwisko\n3.Numer Albumu"<<endl;
    cout <<"4.Kierunek > ";
    cin >> editCase;
        switch(editCase){
            case 1:
                cout <<"Podaj imie : ";
                parametr="";
                cin >> parametr;
                for(int i=0;i<tablicaStudentow.size();i++){
                    if(parametr == tablicaStudentow[i].imie){
                        tablicaStudentow.erase(tablicaStudentow.begin()+i);
                        editOne(tablicaStudentow, newStudent);
                        tablicaStudentow.insert(tablicaStudentow.begin()+i,newStudent);
                    };}
                break;
            case 2:
                cout <<"Podaj Nazwisko : ";
                parametr="";
                cin >> parametr;
                for(int i=0;i<tablicaStudentow.size();i++){
                    if(parametr == tablicaStudentow[i].nazwisko){
                        tablicaStudentow.erase(tablicaStudentow.begin()+i);
                        editOne(tablicaStudentow, newStudent);
                        tablicaStudentow.insert(tablicaStudentow.begin()+i,newStudent);
                    };}
                break;
            case 3:
                cout <<"Podaj numer Albumu : ";
                parametr="";
                cin >> parametr;
                for(int i=0;i<tablicaStudentow.size();i++){
                    if(parametr == tablicaStudentow[i].nrAlbumu){
                        tablicaStudentow.erase(tablicaStudentow.begin()+i);
                        editOne(tablicaStudentow, newStudent);
                        tablicaStudentow.insert(tablicaStudentow.begin()+i,newStudent);
                    };}
                break;
            case 4:
                cout <<"Podaj kierunek : ";
                parametr="";
                cin >> parametr;
                for(int i=0;i<tablicaStudentow.size();i++){
                    if(parametr == tablicaStudentow[i].kierunek){
                        tablicaStudentow.erase(tablicaStudentow.begin()+i);
                            editOne(tablicaStudentow, newStudent);
                        tablicaStudentow.insert(tablicaStudentow.begin()+i,newStudent);
                    };}
                break;
                };
               };
void searchStudent(vector<students>&tablicaStudentow){
    int searchCase;
    string parametr;
    cout << "Po jakim parametrze chcesz wyszukac?\n";
    cout <<"1. Imie\n2.Nazwisko\n3.Numer Albumu"<<endl;
    cout <<"4.Kierunek > ";
    cin >> searchCase;
    switch(searchCase){
        case 1:
            cout <<"Podaj imie : ";
            parametr="";
            cin >> parametr;

            for(int i=0;i<tablicaStudentow.size();i++){
                int tag = tablicaStudentow[i].imie.find(parametr);
                if(tag != string::npos){  showStudent(tablicaStudentow, i);
                };                           
                }
            break;
        case 2:
            cout <<"Podaj Nazwisko : ";
            parametr="";
            cin >> parametr;
            for(int i=0;i<tablicaStudentow.size();i++){
                int tag = tablicaStudentow[i].nazwisko.find(parametr);
                if(tag != string::npos) showStudent(tablicaStudentow, i);
                }
            break;
        case 3:
            cout <<"Podaj numer Albumu : ";
            parametr="";
            cin >> parametr;
            for(int i=0;i<tablicaStudentow.size();i++){
                int tag = tablicaStudentow[i].nrAlbumu.find(parametr);
                if(tag != string::npos) showStudent(tablicaStudentow, i);
                    };
            break;
        case 4:
            cout <<"Podaj kierunek : ";
            parametr="";
            cin >> parametr;
            for(int i=0;i<tablicaStudentow.size();i++){
                int tag = tablicaStudentow[i].kierunek.find(parametr);
                if(tag != string::npos)showStudent(tablicaStudentow, i);
                }
            break;
    };
};                 
void showAvg(){
    cout <<"\nPodaj srednia : ";
    double avarge;
    cin >> avarge;
    cout << "\nPodaj 1 jesli maja byc ponizej sredniej 2 jesli powyzej";
    int param;
    cin >> param;
    for(int i=0;i<tablicaStudentow.size();i++){
        if(avarge > tablicaStudentow[i].srednia && param == 1)showStudent(tablicaStudentow, i);
        if(avarge < tablicaStudentow[i].srednia && param == 2)showStudent(tablicaStudentow, i);                  
    };
};
 