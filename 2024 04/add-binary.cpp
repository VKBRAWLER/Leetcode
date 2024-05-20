#include<iostream>
#include <stdlib.h>
using namespace std;
class Solution {
public:
  string addBinary(string a, string b) {
    int m = a.size()-1, n = b.size()-1;
    int carry = 0;
    string ans = "";
    while (m >= 0 && n >= 0) {
      int val = carry;
      if (a[m--] == '1') val++;
      if (b[n--] == '1') val++;
      if (val > 1) carry = 1;
      else carry = 0;
      if (val%2) ans = "1" + ans;
      else ans = "0" + ans;
    }
    while (m >= 0) {
      if (carry) {
        if (a[m--] == '1') ans = "0" + ans;
        else {ans = "1" + ans; carry = 0; };
      }
      else {ans = a.substr(0, m+1) + ans; break; }
    }
    while (n >= 0) {
      if (carry) {
        if (b[n--] == '1') ans = "0" + ans;
        else {ans = "1" + ans; carry = 0; };
      }
      else {ans = b.substr(0, n+1) + ans; break; }
    }
    if (carry) ans = "1" + ans;
    return ans;
  }
};
int main() {
  Solution s;
  cout << s.addBinary("1010", "1011");
}