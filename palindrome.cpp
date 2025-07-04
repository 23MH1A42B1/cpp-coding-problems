#include<bits/stdc++.h>
using namespace std;
// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {  
    int left = 0; // Start pointer
    int right = str.size() - 1; // End pointer
    while (left < right) { // Loop until the pointers meet
        if (str[left] != str[right]) { // Check characters at both ends
            return false; // Not a palindrome if characters differ
        }
        left++; // Move the left pointer to the right
        right--; // Move the right pointer to the left
    }
    return true; // If all characters matched, it's a palindrome
}
// Main function to demonstrate the palindrome check
int main() {
    string input; // Variable to store user input
    cout << "Enter a string: "; // Prompt user for input
    getline(cin, input); // Read the entire line including spaces
    if (isPalindrome(input)) { // Check if the input is a palindrome
        cout << "The string is a palindrome." << endl; // Output result
    } else {
        cout << "The string is not a palindrome." << endl; // Output result
    }
    return 0; // Indicate successful completion
}
// This code checks if a given string is a palindrome.
// It uses the C++14 standard for compilation.  
// It reads a string from the user and outputs whether it is a palindrome or not.
// The function `isPalindrome` compares characters from both ends of the string
// moving towards the center, returning false if any characters differ.
// The main function handles user input and calls the palindrome checking function.
// The code is designed to be simple and efficient, suitable for educational purposes.
// It does not handle case sensitivity or ignore spaces, which can be added for more robust checks