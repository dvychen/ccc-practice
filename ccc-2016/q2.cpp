#include <iostream>
#include <algorithm>

using namespace std;

int mintotalspd(int dmoj[], int peg[], int N) {
  int min = 0;
  for (int i = 0; i < N ; i++) {
    min += max(dmoj[i], peg[i]);
  }
  return min;
}

int maxtotalspd(int all[], int length) {
  int max = 0;
  for (int i = length-1; i >= length/2 ; i--) {
    max += all[i];
  }
  return max;
}

int main() {
  // Input
  int selection, N;
  cin >> selection;
  cin >> N;
  int dmoj[N]; // speeds
  int peg[N];
  int all[N*2];
  for (int i = 0; i < N; i++) {
    cin >> dmoj[i];
    all[i] = dmoj[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> peg[i];
    all[i+N] = peg[i];
  }
  sort(dmoj, dmoj + N);
  sort(peg, peg + N);
  sort(all, all + N*2);
  // Cases
  if (selection == 1)
    cout << mintotalspd(dmoj, peg, N) << endl;
  else if (selection == 2)
    cout << maxtotalspd(all, N*2) << endl;
}
