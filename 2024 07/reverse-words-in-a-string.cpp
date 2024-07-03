#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  string reverseWords(string s) {
    string ns = "";
    string sub = "";
    for (char c: s) {
      if (c == ' ') {
        if (sub != "") { ns = sub + " " + ns; sub = ""; }
      }
      else sub += c;
    }
    if (sub != "") { ns = sub + " " + ns; sub = ""; }
    return ns.substr(0, ns.size()-1);
  }
};
int main() {
  Solution S;
  string s = "the sky is blue";
  cout << S.reverseWords(s);
}