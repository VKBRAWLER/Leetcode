#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maxVowels(string s, int k) {
    int count = 0, n = s.size();
    if (n <= k) { 
      for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
      }
      return count;
    }
    int i = 0;
    while (i < k) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
      i++;
    }
    int MAX = count; 
    while (i < n) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
      if (s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u') count--;
      MAX = max(MAX, count);
      i++;
    }
    return MAX;
  }
};