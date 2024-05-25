#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFlips(string target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = target.size();
        if (n == 1) return target[0];
        char all = '0';
        int steps = 0;
        for (int i = 0; i < n; i++) {
            if (target[i] !=all) {
                all = (all == '0' ? '1' : '0');
                steps++;
            }
        }
        return steps;
    }
};