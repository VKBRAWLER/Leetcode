#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool halvesAreAlike(string s) {
        int size = s.size(), left = 0, right = 0;
        for (int i = 0; i < size/2; i++) {
          if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') left++;
        }
        for (int i = size/2; i < size; i++) {
          if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') right++;
        }
        return left == right;
    }
};
int main() {
  Solution sol;
  string s = "book";
  cout << sol.halvesAreAlike(s) << endl;
  s = "textbook";
  cout << sol.halvesAreAlike(s);

}