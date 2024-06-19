#include <iostream>
#include <conio.h>
using namespace std;
// średnia z przekątnymi lub bez 
constexpr int  maxSize = 10;
void  fillArr(int arr[maxSize][maxSize],int userSize){
    for(int j =0;j<userSize;j++){
            for(int k =0; k<userSize;k++){
                cout << "Wczytaj wartosc >";
                 cin >> arr[j][k];
                cout << arr[j][k] << " ";
            }
            cout << endl;
    }
}

void  showArr(int arr[maxSize][maxSize],int userSize){
    for(int j =0;j<userSize;j++){
            for(int k =0; k<userSize;k++){
                cout << arr[j][k] << " ";
            }
            cout << endl;
    }
}
int oversum(int arr[maxSize][maxSize],int userSize){
    int oversum=0;
        for(int j =0;j<userSize;j++){
            for(int k =0; k<userSize;k++){
                if(j<k)  oversum += arr[j][k];
                }

    }
     cout<< "\n\n";

    return oversum;

}

int undersum(int arr[maxSize][maxSize],int userSize){
    int undersum=0;
        for(int j =0;j<userSize;j++){
            for(int k =0; k<userSize;k++){
                if(j>k)  undersum += arr[j][k];
                }

    }
        cout<< "\n\n";
 
    return undersum;
}
int colSum(int arr[maxSize][maxSize], int userSize, int colNum){
    int colSum=0;
     for(int j =0;j<userSize;j++){
            for(int k =0; k<userSize;k++){
                if(k==colNum)  colSum += arr[j][k];

                }
     }
         cout<< "\n\n";

        return colSum;

}

int rowSum(int arr[maxSize][maxSize], int userSize, int rowNum){
    int rowSum=0;
     for(int j =0;j<userSize;j++){
            for(int k =0; k<userSize;k++){
                if(j==rowNum)  rowSum += arr[j][k];

                }
     }
         cout<< "\n\n";

        return rowSum;

}

int averge(int arr[maxSize][maxSize], int userSize, char tag){
    int sum =0;
    if(tag="Z"){
         int rowSum=0;
     for(int j =0;j<userSize;j++){
            for(int k =0; k<userSize;k++){
                

                }
     }
         cout<< "\n\n";

        return rowSum;
    }else{

    }
}
int main()
{
            int arr[maxSize][maxSize];
            int userSize,caseNum,colNum,rowNum;
            char znak;
            do{
            cout << "Type array size N x N ";
            cin >> userSize;
            fillArr(arr,userSize);
            cout << "suma nad  przekatna jest " << oversum(arr,userSize)<< endl;
            showArr( arr, userSize);
            cout << "suma pod  przekatna jest " << undersum(arr,userSize)<<endl;
            showArr( arr, userSize);
            cout << "\n\nInteresuje cie suma:";
            cout << "\n1 - Kolumny \n2 - Wiersza"<< endl;
            cout << "\n 3 - srednia arytmetyczna";
            cin >> caseNum;

            switch(caseNum)
            {
            case 1:
                cout << "Podaj nr kolumny > ";
                cin >> colNum;
                cout << "\n Suma z danej kolumny to: " <<colSum(arr,userSize,colNum)<<endl;
                showArr( arr, userSize);
                break;
            case 2 :
                cout << "\nPodaj nr wiersza > ";
                cin >> rowNum;
                cout << "\n Suma danego wiersza to: " << rowSum(arr,userSize,rowNum)<<endl;
                showArr( arr, userSize);
                break;
            case 3:
                cout << "Podaj paramter Z- z przekatna B - bez przekatnej> ";
                char tag;
                cin >> tag;
                cout << "srednia to " << averge( arr,  userSize,  tag){      
            }
            break;
            }
            cout << "\n\nPrzerwij prace wpisujac N > ";
            cin >> znak;
            system("cls");
            } while(znak != 'N');
            
    return 0;
}
