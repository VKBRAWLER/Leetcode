#include<iostream>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    int passThePillow(int n, int time) {
        int a = time% ((n-1)*2);
        if (a >= n) return ((n-1)*2 - a) +1;
        return a + 1;
    }
};