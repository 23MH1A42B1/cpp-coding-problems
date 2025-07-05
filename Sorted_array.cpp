#include<bits/stdc++.h>
using namespace std;
// Function to sort an array using bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Loop through each element
        for (int j = 0; j < n - i - 1; j++) { // Compare adjacent elements
            if (arr[j] > arr[j + 1]) { // If the current element is greater than the next
                swap(arr[j], arr[j + 1]); // Swap them
            }
        }
    }
}
// Function to print the sorted array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) { // Loop through the array
        cout << arr[i] << " "; // Print each element
    }
    cout << endl; // New line after printing the array
}
// Main function to demonstrate the bubble sort
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Sample array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    bubbleSort(arr, n); // Call the bubble sort function
    cout << "Sorted array: \n"; // Output message
    printArray(arr, n); // Print the sorted array
    return 0; // Indicate successful completion
}
// This code implements a simple bubble sort algorithm to sort an array of integers.
// It defines a function `bubbleSort` that sorts the array in ascending order by repeatedly
// comparing adjacent elements and swapping them if they are in the wrong order.
// The `printArray` function is used to display the sorted array.   