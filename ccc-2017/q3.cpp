#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    int boards[N]; 
    for (int i = 0; i < N; i++) {
        cin >> boards[i];
    }
    sort(boards, boards + N);
    
}