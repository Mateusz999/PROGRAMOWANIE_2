#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include <cstdlib>
#include "osiem.cpp"
using namespace std;

int main() {
   fillStudentsWithData(studentsList);
    int choice;

    do{
        menu(choice);
        switch (choice)
        {
        case 1:
            addStudent(studentsList);
            break;
        case 2:
            deleteStudent(studentsList);
            break;
        case 3:
            modifyStudent(studentsList);
            break;
        case 4:
            displayStudents(studentsList);
            break;
        case 5:
            displayStudentsByKey(studentsList);
            break;
        case 6:
            semestralStudent(studentsList);
            break;
        case 7:
            system("cls");
        }
    }while(choice!=0);
    return 0;
}
