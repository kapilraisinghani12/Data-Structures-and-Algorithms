#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void exampleFunction(int n) {
    // Example code for illustration
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
           cout<<".";
        }
    }
}

void measureTimeComplexity(void (*func)(int), int maxSize) {
    cout << "n, Time (microseconds)" << endl;

    for (int n = 1; n <= maxSize; n *= 2) {
        auto start_time = high_resolution_clock::now();
        func(n);
        auto end_time = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end_time - start_time);

        cout << n << ", " << duration.count() << endl;
    }
}

int main() {
    int maxSize = 10; // Adjust the maximum input size based on your program

    measureTimeComplexity(exampleFunction, maxSize);

    return 0;
}
