#include<iostream>
#include <stdlib.h>
using namespace std;
class Solution {
public:
  int maxLengthBetweenEqualCharacters(string s) {
    int dis = 0, len = 0;
    char s1, s2;
    while (s[len] != '\0') { len++; }
    if (s[0] == s[len]) { return --len; }
    for (int i = 0; i < len; i++) {
      s1 = s[i];
      for (int j = len; j > i; j--) {
        s2 = s[j];
        if (s1 == s2 ) {
          if (dis < j-i) dis = j-i;
          break;
        }
      }
    }
    dis--;
    return dis;
  }
};
int main() {
  Solution solution;
  cout << solution.maxLengthBetweenEqualCharacters("aa") << endl;
  cout << solution.maxLengthBetweenEqualCharacters("abca") << endl;
  cout << solution.maxLengthBetweenEqualCharacters("cbzxy") << endl;
}