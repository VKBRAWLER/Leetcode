#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool validMountainArray(vector<int>& arr) {
    if (arr.size() < 3 || arr[0] >= arr[1]) return false; 
    bool dec = false;
    for (int i = 2; i < arr.size(); i++) {
      if (arr[i] == arr[i-1]) return false;
      else if (!dec && arr[i] < arr[i-1]) dec = true;
      else if (dec && arr[i] > arr[i-1]) return false;
    }
    return dec;
  }
};