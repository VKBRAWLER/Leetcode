#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class RecentCounter {
public:
  queue<int> counter;
  RecentCounter() {}

  int ping(int t) {
    counter.push(t);
    while (counter.front() < t-3000) { counter.pop(); }
    return counter.size();
  }
};
int main() {
  RecentCounter s;
}