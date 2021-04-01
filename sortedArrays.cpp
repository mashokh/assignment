//
//  main.cpp
//  msh
//
//  Created by masho khelashvili on 01.04.21.
//

#include <iostream>
using namespace std;

void mergeTwoArrays(int firstArray[], int secondArray[], int resultArray[], int a, int b){
    int i = 0, j = 0, k = 0;
    while(i < a && j < b){
        if(firstArray[i] < secondArray[j])
            resultArray[k++] = firstArray[i++];
        else
            resultArray[k++] = secondArray[j++];
    }
    while (i < a)
        resultArray[k++] = firstArray[i++];
    while (j < b)
        resultArray[k++] = secondArray[j++];
}

void enterNumbers(int n, int arr[]){
    for(int i = 0; i < n; i++){
        int curr;
        cin >> curr;
        arr[i] = curr;
    }
}

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a;
    int firstArray[a];
    enterNumbers(a, firstArray);
    cin >> b;
    int secondArray[b];
    enterNumbers(b, secondArray);
    cout << secondArray[0] << endl;
    int resultArray[a + b];
    mergeTwoArrays(firstArray, secondArray, resultArray, a, b);
    for(int i = 0; i < a + b; i++)
    cout << resultArray[i] << " ";
    cout << endl;
}
