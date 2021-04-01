//
//  main.cpp
//  masho
//
//  Created by masho khelashvili on 01.04.21.
//

#include <iostream>
#include <set>
#include <string>
#include <iterator>

using namespace std;

bool result (int k, char * arr, int n){
    set <string> setOfNumbers;
    for(int i = 0; i < n - 2; i++){
        string currNumber = "";
        for (int j = 0; j < k; j++){
            currNumber += arr[i + j];
        }
        auto searchResult = setOfNumbers.find(currNumber);
        if (searchResult != setOfNumbers.end()) return true;
        setOfNumbers.insert(currNumber);
    }
    return false;
}

int main(int argc, const char * argv[]) {
    int k;
    cin >> k;
    int n;
    cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++){
        char ch;
        cin >> ch;
        arr[i] = ch;
    }
    if(result(k, arr, n)){
        cout << "Yes" << endl;
    } else cout << "No" << endl;
    return 0;
}
