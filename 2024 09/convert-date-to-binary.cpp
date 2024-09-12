#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertDateToBinary(string date) {
        int D = stoi(date.substr(8,2)), M = stoi(date.substr(5,2)), Y = stoi(date.substr(0,4));
        string DD = "", MM = "", YY = "";
        for (int i = 2; D || M || Y; i = i*2) {
            if (D) { DD = (D%2 ? "1" : "0") + DD; D = D/2; }
            if (M) { MM = (M%2 ? "1" : "0") + MM; M = M/2; }
            if (Y) { YY = (Y%2 ? "1" : "0") + YY; Y = Y/2; }
        }
        return YY + "-" + MM + "-" + DD;
    }
};