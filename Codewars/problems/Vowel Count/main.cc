#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  for (auto x: inputStr) {
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') num_vowels++;
  }
  return num_vowels;
}
