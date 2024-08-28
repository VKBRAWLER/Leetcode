#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	string removeDuplicates(string s) {
		string ans;
		ans.push_back(s[0]);
		for(int i=1 ; i<s.length() ; i++){
			if(!ans.empty() && s[i] == ans.back()) {
				ans.pop_back();
			}
			else {
				ans.push_back(s[i]);
			}
		}
		return ans;
	}
};
int main() {
  Solution s;
  // string S = "012345";
  // S.erase(3,4);
  // cout << S;
  cout << s.removeDuplicates("aaaa");
}