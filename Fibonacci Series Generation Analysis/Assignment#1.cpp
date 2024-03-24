#include <iostream>
using namespace std;

// Iterative approach to generate Fibonacci series
void fibonacciIterative(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Iterative approach: ";
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }
    cout << "\\b\\b "; // Backspace to remove the last comma
    cout << endl;
}

// Recursive approach to generate Fibonacci series
int fibonacciRecursive(int n) {
    if(n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Function to print the Fibonacci series using the recursive approach
void printFibonacciRecursive(int n) {
    cout << "Recursive approach: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacciRecursive(i) << ", ";
    }
    cout << "\\b\\b "; // Backspace to remove the last comma
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    fibonacciIterative(n);
    printFibonacciRecursive(n);

    
}
