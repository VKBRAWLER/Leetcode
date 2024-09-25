#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TrieNode {
public:
  vector<int> index;
  int score = 0;
  unordered_map<char, TrieNode *> next;
};
class Solution {
public:
  vector<int> Cscore;
  void TrieBFS (TrieNode *node, int currentScore) {
    currentScore += node->score;
    for (int i: node->index) { Cscore[i] = currentScore; }
    for (auto& pair : node->next) {
      char ch = pair.first;
      TrieNode* nextNode = pair.second;
      TrieBFS(nextNode, currentScore);
    }
  }
  vector<int> sumPrefixScores(vector<string>& words) {
    TrieNode* root = new TrieNode();
    for (int i = 0; i < words.size(); i++) {
      TrieNode *p = root;
      for (char word : words[i]) {
        if (!p->next[word]) p->next[word] = new TrieNode();
        p = p->next[word];
        p->score++;
      }
      p->index.push_back(i);
    }
    Cscore = vector<int>(words.size());
    TrieBFS(root, 0);
    return Cscore;
  }
};
