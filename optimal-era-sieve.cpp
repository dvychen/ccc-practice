#include <iostream>

using namespace std;

int main() {
    // Initializing
    int N;
    cin >> N;
    bool primeInd[N];
    for (int i = 0; i < N; i++) {
        primeInd[i] = true;
    }
    // Sieving
    for (int i = 2; i*i <= N; i++) {
        if (primeInd[i]) {
            for (int j = i*i; j <= N; j += i) {
                primeInd[j] = false;
            }
        }
    }
    // Printing
    for (int i = 2; i < N; i++) {
        if (primeInd[i])
            cout << i << endl;
    }
}