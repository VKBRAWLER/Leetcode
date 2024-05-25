#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (!n) return true;
        int i = flowerbed.size()-1;
        if (!i) return (n == 1 ? !flowerbed[0] : false);
        if (!flowerbed[i] && !flowerbed[i-1]) { flowerbed[i] = 1; n--; }
        while (n > 0 && --i > 0) {
            if (!flowerbed[i-1] && !flowerbed[i] && !flowerbed[i+1]) { flowerbed[i] = 1; n--; }
        }
        if (!n) return true;
        if (!flowerbed[0] && !flowerbed[1]) n--;
        return !n;
    }
};