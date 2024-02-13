#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string w: words) {
          if (w.size() == 1) return w;
          else {
            int n =  w.size();
            bool pal = true;
            for (int i = 0; i<=n/2; i++) {
              if (w[i] != w[n-i-1]) { pal=false; break;}
            }
            if (pal) return w;
          }
        }
      return "";
    }
};
int main() {
  Solution s;
  vector<string> words = {"abc","car","ada","racecar","cool"};
  cout << s.firstPalindrome(words) << endl;
  words = {"notapalindrome","racecar"};
  cout << s.firstPalindrome(words) << endl;
  words = {"def","ghi"};
  cout << s.firstPalindrome(words) << endl;
}