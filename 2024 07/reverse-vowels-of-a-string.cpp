#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  string reverseVowels(string s) {
    int n = s.size();
    if (n == 1) return s;
    vector<int> vol;
    int m = 0;
    while (m < n) {
      if (s[m] == 'a' || s[m] == 'e' || s[m] == 'i' || s[m] == 'o' || s[m] == 'u' || s[m] == 'A' || s[m] == 'E' || s[m] == 'I' || s[m] == 'O' || s[m] == 'U') {
        if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' || s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U') {
          char temp = s[m]; s[m] = s[n]; s[n] = temp; m++; n--;
        }
        else n--;
      }
      else m++;
    }
    return s;
  }
};
int main() {
  Solution S;
  string s = "hello";
  cout << S.reverseVowels(s);
}