#include<iostream>
#include<vector>
#include "header.h"
#include <string>
using namespace std;
 vector<double> numbers;
vector<double> show() {
for(double i =0;i<10;i++){
    numbers.push_back(rand()%100);
    cout << numbers[i]<<endl;
   

}
};

vector<double> vectorParameter() {

 int param;




    double min = *min_element(numbers.begin(), numbers.end());
    double max = *max_element(numbers.begin(), numbers.end());
    int minIndex = min_element(numbers.begin(), numbers.end()) - numbers.begin();
    double sum = accumulate(numbers.begin(), numbers.end(), 0.0);
    int maxIndex = max_element(numbers.begin(), numbers.end()) - numbers.begin();
    int tag;
          for(int i =0;i<10;i++){
        
    if(numbers[i] == param)  tag = i;

}

    sum = sum / numbers.size();

    result.push_back(min);
    result.push_back(max);
    result.push_back(minIndex);
    result.push_back(maxIndex);
    result.push_back(sum);
    result.push_back(tag);
    

    return result;
};
