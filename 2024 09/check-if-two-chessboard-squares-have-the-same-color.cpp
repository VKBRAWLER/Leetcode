#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        return (coordinate1[1] + coordinate1[0]) % 2 == (coordinate2[1] + coordinate2[0]) % 2;
    }
};