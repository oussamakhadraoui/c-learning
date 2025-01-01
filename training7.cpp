#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main() {
    vector<string> lines;
    string line;
    regex pattern("\\d");
    smatch match;
    ifstream file("a.txt");
    unsigned long long result = 0;  // Changed to unsigned long long

    if (file.is_open()) {
        while (getline(file, line)) {
            int firstDigit=-1;
            int lastDigit=-1;
            int n=line.size();
            for(int i =0;i<n;i++){
                if(isdigit(line[i])){
                    firstDigit=line[i]-'0';
                    break;
                }
            }
            for(int i =n-1;i>=0;i--){
                if(isdigit(line[i])){
                    lastDigit=line[i]-'0';
                    break;
                }
            }
            result+=firstDigit+lastDigit;
        }
        file.close();
    } else {
        cerr << "Unable to open file" << endl;
        return 1;
    }
    cout << "Result: " << result << endl;
    return 0;
}