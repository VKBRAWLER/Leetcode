#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TrieNode {
public:
  vector<TrieNode *> next = vector<TrieNode *>(10);
};
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
      TrieNode * root = new TrieNode();
      for (int num : arr1) {
        TrieNode * p = root;
        string numStr = to_string(num);
        for (char c : numStr) {
          int idx = c - '0';
          if (!p->next[idx]) p->next[idx] = new TrieNode();
          p = p->next[idx]; 
        }
      }
      int MAX_LEN = 0;
      for (int num: arr2) {
        TrieNode *p = root;
        int len = 0;
        string numStr = to_string(num);
        for (char c : numStr) {
          int idx = c - '0';
          if (!p->next[idx]) break;
          len++;
          p = p->next[idx]; 
        }
        MAX_LEN = max(MAX_LEN, len);
      }
      return MAX_LEN;
    }
};