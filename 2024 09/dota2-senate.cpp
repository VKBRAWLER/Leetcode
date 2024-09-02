#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string predictPartyVictory(string senate) {
      queue<int> Dire, Radient;
      for (int i = 0; i < senate.size(); i++) {
        if (senate[i] == 'D') Dire.push(i);
        else Radient.push(i);
      }
      int n = senate.size();
      while (!Radient.empty() && !Dire.empty()) {
        if (Radient.front() < Dire.front()) Radient.push(Radient.front() + n);
        else Dire.push(Dire.front() + n);
        Dire.pop();
        Radient.pop();
      }
      return Radient.empty() ? "Dire" :"Radiant";
    }
};
int main() {
  
}