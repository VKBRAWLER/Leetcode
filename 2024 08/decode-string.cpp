#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
      stack<char> st;
      for (char c: s) {
        if (c == ']') {
          string code = "";
          while (st.top() != '[') {
            code = st.top() + code;
            st.pop();
          }
          st.pop();
          string num = "";
          while (!st.empty() && st.top() >= 48 && st.top() <= 57) { num = st.top() + num; st.pop(); }
          // cout << count << " "; 
          for (int rep = 0; rep < stoi(num) ; rep++) {
            for (char d: code) { st.push(d); }
          }
        }
        else st.push(c);
      }
      s = "";
      while (!st.empty()) {
        s = st.top() + s;
        st.pop();
      }
      return s;
    }
};
int main() {
  Solution S;
  string s = "3[a]2[bc]";
  cout << S.decodeString(s);
}