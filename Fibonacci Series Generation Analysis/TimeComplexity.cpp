#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Iterative approach to generate Fibonacci series
void fibonacciIterative(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci Series (Iterative): ";
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
    cout << endl;
}

// Recursive approach to generate Fibonacci series
int fibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;

    // Execution time measurement for iterative approach
    auto startIterative = high_resolution_clock::now();
    fibonacciIterative(n);
    auto stopIterative = high_resolution_clock::now();
    auto durationIterative = duration_cast<microseconds>(stopIterative - startIterative);
    cout << "Time taken by iterative approach: " << durationIterative.count() << " microseconds" << endl;

    // Execution time measurement for recursive approach
    auto startRecursive = high_resolution_clock::now();
    cout << "Fibonacci Series (Recursive): ";
    for (int i = 0; i < n; ++i)
        cout << fibonacciRecursive(i) << " ";
    cout << endl;
    auto stopRecursive = high_resolution_clock::now();
    auto durationRecursive = duration_cast<microseconds>(stopRecursive - startRecursive);
    cout << "Time taken by recursive approach: " << durationRecursive.count() << " microseconds" << endl;

    return 0;
}
