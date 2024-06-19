#include <iostream>
#include <conio.h>
using namespace std;

constexpr int  maxSize = 10;
void  fillArr(int arr[maxSize][maxSize],int userSize){
    for(int j =0;j<userSize;j++){
            for(int k =0; k<userSize;k++){
                arr[j][k] = rand()%100+1;
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
    showArr( arr, userSize);
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
      showArr( arr, userSize);
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
      showArr( arr, userSize);
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
      showArr( arr, userSize);
        return rowSum;

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
            cout << "suma nad  przekatna jest " << oversum(arr,userSize)<<endl;
            cout << "suma pod  przekatna jest " << undersum(arr,userSize);
            cout << "\n\nInteresuje cie suma:";
            cout << "\n1 - Kolumny \n2 - Wiersza"<< endl;
            cout<< "Wpisz > ";
            cin >> caseNum;

            switch(caseNum)
            {
            case 1:
                cout << "Podaj nr kolumny > ";
                cin >> colNum;
                cout << "\n Suma z danej kolumny to: " <<colSum(arr,userSize,colNum);
                break;
            case 2 :
                cout << "\nPodaj nr wiersza > ";
                cin >> rowNum;
                cout << "\n Suma danego wiersza to: " << rowSum(arr,userSize,rowNum);
            }
            cout << "\n\nPrzerwij prace wpisujac N > ";
            cin >> znak;
            system("cls");
            } while(znak != 'N');
    return 0;
}
