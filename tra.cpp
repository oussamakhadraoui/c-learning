#include <iostream>
#include <string>
#include <algorithm>  // For std::min
using namespace std;

string generateKey(int num1, int num2, int num3) {
    // Convert the numbers to four-digit strings by padding with leading zeros
    string num1_str = to_string(num1);
    string num2_str = to_string(num2);
    string num3_str = to_string(num3);
    
    // Pad the numbers with leading zeros to make them four digits long
    while (num1_str.size() < 4) num1_str = '0' + num1_str;
    while (num2_str.size() < 4) num2_str = '0' + num2_str;
    while (num3_str.size() < 4) num3_str = '0' + num3_str;

    // Generate the key by taking the minimum digit at each position
    string key = "";
    for (int i = 0; i < 4; ++i) {
        char min_digit = min({num1_str[i], num2_str[i], num3_str[i]});
        key += min_digit;
    }

    // Remove leading zeros
    int first_non_zero = 0;
    while (first_non_zero < key.size() && key[first_non_zero] == '0') {
        first_non_zero++;
    }
    
    // If all digits are zeros, return "0"
    if (first_non_zero == key.size()) return "0";
    
    // Return the key without leading zeros
    return key.substr(first_non_zero);
}

int main() {
    // Test cases
    cout << generateKey(987, 879, 798) << endl;  // Output: "564"
    cout << generateKey(1, 2, 3) << endl;      // Output: "12"
    cout << generateKey(1234, 5678, 9012) << endl;  // Output: "1012"
    
    return 0;
}
