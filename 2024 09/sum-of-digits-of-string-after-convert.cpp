#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getLucky(string s, int k) {
      int sum = 0;
      for (int i: s) { sum += (i-96)%10 + (i-96)/10; }
      for (int i = 1; i < k; i++) {
        int nsum = 0;
        while (sum) {
          nsum += sum%10;
          sum /= 10;
        }
        sum = nsum;
      }
      return sum;
    }
};