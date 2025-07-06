#include<bits/stdc++.h>
using namespace std;
// Function to check if a number is prime
bool isPrime(int n) {   
    if (n <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i <= sqrt(n); i++) { // Check divisibility from 2 to sqrt(n)
        if (n % i == 0) return false; // If divisible, it's not prime
    }
    return true; // If no divisors found, it's prime
}
// Function to print all prime numbers up to a given limit
void printPrimes(int limit) {   
    for (int i = 2; i <= limit; i++) { // Loop through numbers from 2 to limit
        if (isPrime(i)) { // Check if the number is prime
            cout << i << " "; // Print the prime number
        }
    }
    cout << endl; // New line after printing all primes
}
// Main function to demonstrate the prime number checking and printing
int main() {
    int limit; // Variable to hold the upper limit for prime numbers
    cout << "Enter the upper limit to print prime numbers: "; // Prompt for input
    cin >> limit; // Read the upper limit from user input
    cout << "Prime numbers up to " << limit << " are: "; // Output message
    printPrimes(limit); // Call the function to print prime numbers
    return 0; // Indicate successful completion
}
// This code defines a simple program to check and print prime numbers up to a specified limit.
// It includes a function `isPrime` to determine if a number is prime by checking divisibility
// from 2 to the square root of the number. The `printPrimes` function iterates through all numbers
// from 2 to the given limit and prints those that are prime. The main function prompts the user for the limit              
// and displays the prime numbers up to that limit. The program uses the C++14 standard for compilation.
// It is efficient for small to moderate limits, but may not be optimal for very large numbers