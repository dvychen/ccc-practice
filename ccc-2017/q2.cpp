#include <iostream>
#include <algorithm>

using namespace std;

void printArr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {    
    int N;
    cin >> N;
    int measurements[N];
    int solution[N];
    for (int i = 0; i < N; i++) {
        cin >> measurements[i];
        solution[i] = 0;
    }
    sort(measurements, measurements + N);
    if (N % 2 == 0) { // Even N val
        for (int i = 0; i < N / 2; i++)
        {
            solution[i * 2] = measurements[N / 2 - 1 - i];
        }
        for (int i = 0; i < N / 2; i++)
        {
            solution[i * 2 + 1] = measurements[N / 2 + i];
        }
    }
    else { // Odd N val
        int measurementsV2[N-1];
        for (int i = 0; i < N-1; i++) {
            measurementsV2[i] = measurements[i+1];
        }
        for (int i = 0; i < N / 2; i++)
        {
            solution[i * 2] = measurementsV2[N / 2 - 1 - i];
        }
        for (int i = 0; i < N / 2; i++)
        {
            solution[i * 2 + 1] = measurementsV2[N / 2 + i];
        }
        solution[N-1] = measurements[0]; // Last value is the lowest low tide recorded.
    }
    
    printArr(solution, N);
}