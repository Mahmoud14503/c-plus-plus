#include<iostream>
using namespace std;
#include<cmath>

void inputArray(int arr[], int size) {
    if (size <= 0)
        return;
    cin >> arr[size - 1];
    inputArray(arr , size - 1);
}


void round(int n = 5) {
    if (n == 0) return;
    cout << n << " , ";
    round(n - 1);
}


int factorial(int n = 5) {
    if (n == 0 || n == 1)
        return 1;
    return n*factorial(n - 1);
}

int fibonacci(int n = 5) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// int g(int n = 5) {
//     if (n == 1) {
//         return 1;
//     }
//     // cout << g(n - 1) - pow(2, n - 1) << " , ";
//     return g(n - 1) - pow(2, n - 1);
// }

int g(int n = 5) {
    if (n == 1) {
        std::cout << "1, ";
        return 1;
    }
    int result = g(n - 1) - pow(2, n - 1);
    std::cout << result << " , ";
    return result;
}


int main() {
    g();
    return 0;
}