#include <iostream>
#include <string>

using namespace std;

// Function to generate the largest palindromic number of length n that is divisible by 2
string generatePalindromeDivisibleBy2(int n) {
    if (n == 1) {
        // For n = 1, the only valid single-digit palindrome divisible by 2 is "2"
        return "2";
    }

    // Start with the largest possible palindrome with all digits being '9'
    string half = string((n + 1) / 2, '9');
    string palindrome = half;

    // Create the full palindrome by mirroring the first half
    for (int i = (n % 2 == 0 ? half.length() - 1 : half.length() - 2); i >= 0; --i) {
        palindrome += half[i];
    }

    // Check if the palindrome ends with an even digit
    if ((palindrome.back() - '0') % 2 != 0) {
        // Find the largest even digit less than the current last digit
        char new_last_digit = '8'; // 8 is the largest even digit <= '9'
        palindrome.back() = new_last_digit;

        // If changing the last digit to 8 resulted in invalid palindrome, handle it
        // by decrementing the middle part and mirroring again.
        if (palindrome[0] == '0') {
            string new_half = half;
            int i = new_half.size() - 1;
            while (i >= 0 && new_half[i] == '0') {
                new_half[i] = '9';
                --i;
            }
            if (i >= 0) {
                new_half[i]--;
            }
            palindrome = new_half;
            for (int j = (n % 2 == 0 ? new_half.size() - 1 : new_half.size() - 2); j >= 0; --j) {
                palindrome += new_half[j];
            }
        }
    }

    return palindrome;
}

int main() {
    int n;
    cout << "Enter the length of the palindrome (n): ";
    cin >> n;
    
    string result = generatePalindromeDivisibleBy2(n);
    cout << "The largest palindromic number of length " << n << " that is divisible by 2 is: " << result << endl;

    return 0;
}
