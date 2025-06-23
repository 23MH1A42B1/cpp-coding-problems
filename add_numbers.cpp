#include<bits/stdc++.h>
using namespace std;
// Function to add two numbers
int add(int a, int b) {
    return a + b;
}
// Main function to demonstrate the add function
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2; // Input two numbers from the user
    int result = add(num1, num2); // Call the add function
    cout << "The sum is: " << result << endl; // Output the result
    return 0; // Indicate successful completion
}
// This code adds two numbers input by the user and outputs the result.
// It uses the C++14 standard for compilation. 