#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
      long long waitTime = customers[0][1];
      int currTime = customers[0][1] + customers[0][0];
      for (int i = 1; i  < customers.size(); i++) {
        if (customers[i][0] >= currTime) {
          waitTime += customers[i][1];
          currTime = customers[i][0] + customers[i][1];
        }
        else {
          waitTime += (currTime - customers[i][0]) + customers[i][1];
          currTime += customers[i][1];
        }
      }
      return (double) waitTime/customers.size();
    }
};
int main() {
  
}