#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class RandomizedSet {
public:
    vector<int> S; // Change set to vector
    RandomizedSet() {
        
    }
    bool insert(int val) {
        if (find(S.begin(), S.end(), val) != S.end()) return false; // Use find() to check if val exists
        S.push_back(val); return true; // Use push_back() to insert val
    }
    bool remove(int val) {
      auto loc = find(S.begin(), S.end(), val); // Use find() to find the location of val
      if (loc == S.end()) return false;
      S.erase(loc); return true;
    }
    int getRandom() {
      int index = rand() % S.size();
      return S[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
int main() {
  RandomizedSet* obj = new RandomizedSet();
  cout<<obj->insert(1)<<' ';
  cout<<obj->remove(2)<<' ';
  cout<<obj->insert(2)<<' ';
  cout<<obj->getRandom()<<' ';
  cout<<obj->remove(1)<<' ';
  cout<<obj->insert(2)<<' ';
  cout<<obj->getRandom()<<' ';
}