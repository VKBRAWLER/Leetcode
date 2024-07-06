#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<string> fizzBuzz(int n) {
    vector<string> stri(n);
    for (int i = 1; i <= n; i++) {
      if (i%15 == 0) stri[i-1] = ("FizzBuzz");
      else if (i%5 == 0) stri[i-1] = ("Buzz");
      else if (i%3 == 0) stri[i-1] = ("Fizz");
      else stri[i-1] = (to_string(i));
    }
    return stri;
  }
};