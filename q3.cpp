#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // Input
  int N, M;
  cin >> N;
  cin >> M;
  int phoplaces[M];
  for (int i = 0; i < M; i++) {
    cin >> phoplaces[i];
  }
  int roads[N-1][2];
  for (int i = 0; i < N-1; i++) {
    cin >> roads[i][0];
    cin >> roads[i][1];
  }
  // Solution for first 3 marks
  int path = N-1;
  int counter = 0;
  int position = phoplaces[0];
  while (position != phoplaces[1]) {
    
    counter++;
  }
}
