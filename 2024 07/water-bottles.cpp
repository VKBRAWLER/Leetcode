#include<iostream>
using namespace std;
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
      if (numBottles < numExchange) return numBottles;
      else if (numBottles == numExchange) return numBottles + 1;
      int drink = numBottles;
      int emp = numBottles;
      while (emp >= numExchange) { // 9 3
        int converted = emp/numExchange; // 9/3 = 3
        drink += converted; // 3
        emp = emp%numExchange + converted; // 3 + 0
      }
      return drink;
    }
};
int main() {
  
}