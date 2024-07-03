#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n%2) return n*2;
        return n;
    }
};