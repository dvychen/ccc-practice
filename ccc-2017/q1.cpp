#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    int swiftruns[N];
    int sephruns[N];
    int K = 0;
    int swiftsum = 0;
    int sephsum = 0;
    for (int i = 0; i < N; i++) {
        cin >> swiftruns[i];
        swiftsum += swiftruns[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> sephruns[i];
        sephsum += sephruns[i]; 
    }
    int counter = N;
    if (swiftsum == sephsum)
        K = counter;
    else {
        while ((swiftsum != sephsum && swiftsum != 0)) {
            swiftsum -= swiftruns[counter - 1];
            sephsum -= sephruns[counter - 1];
            counter--;
        }
        K = counter;
    }
    cout << K << endl;
}