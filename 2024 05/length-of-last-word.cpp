#include<iostream>
#include <string> // Include the <string> header file
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length() == 1 && isalpha(s[0])) {return 1;}
        int i = s.length() - 1;
        int t{0};
        while (i >= 0 && isspace(s[i])) {
            i--;
        }
        
        while (i >= 0 && !isspace(s[i])) {
            t++;
            i--;
        }
        return t;
    }
};