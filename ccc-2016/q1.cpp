#include <iostream>

using namespace std;

void printArr(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;
}

bool isAnagram(string word, string anagram) {
  if (word.size() != anagram.size())
    return false;
  // Initializing
  int wordLetters[27];
  int anagramLetters[27];
  for (int i = 0; i < 27; i++) {
    wordLetters[i] = 0;
    anagramLetters[i] = 0;
  }
  // Processing
  for (int i = 0; i < word.size(); i++) {
    wordLetters[(int)word.at(i) - 97]++;
    if (anagram.at(i) == '*')
      anagramLetters[26]++;
    else
      anagramLetters[(int)anagram.at(i) - 97]++;
  }
  // Check if anagram
  int lettersMissing = 0;
  for (int i = 0; i < 26; i++) {
    if (wordLetters[i] < anagramLetters[i])
      return false;
    else if (wordLetters[i] > anagramLetters[i])
      lettersMissing += wordLetters[i] - anagramLetters[i];
  }
  return (lettersMissing == anagramLetters[26]);
}

int main() {
  // Input
  string word, anagram;
  cin >> word;
  cin >> anagram;
  // Output
  if (isAnagram(word, anagram))
    cout << "A" << endl;
  else
    cout << "N" << endl;
  // a --> 97; z --> 122
}
