#include<iostream>
#include<vector>
#include<string>
//#include "header.h"
#include "library.cpp"
using namespace std;
    
int main(){
 
    do{
    int caseNumber;
    menu();
    cin >> caseNumber;
   
    switch(caseNumber){
        case 1: 
            system("CLS");
            add(tablicaStudentow,newStudent);
            break;
        case 2:
            system("CLS");
            deleteStudent(tablicaStudentow);
            break;
        case 3:
            system("CLS");
            editStudent(tablicaStudentow);
            break;
        case 4: 
            system("CLS");
            searchStudent(tablicaStudentow);
            break;
        case 5:
            showStudents();
            break;
        case 6:
            showAvg();
            break;

    };
    ending();
    }while(endTag!="end");
    
    system("CLS");
    cout << "PROGRAM ZAKONCZYL SWOJE DZIALANIE"<<endl << endl << endl;
    return 0;

}