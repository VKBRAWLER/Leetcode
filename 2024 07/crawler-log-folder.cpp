#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<string>& logs) {
      int lvl = 0;
      for (int i = 0; i < logs.size(); i++) {
        if (logs[i] == "../") { if (lvl > 0) lvl--; }
        else if (logs[i] == "./") continue;
        else lvl++;
      }
      return lvl;
    }
};
int main() {
  
}