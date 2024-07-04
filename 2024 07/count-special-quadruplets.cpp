#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
int countQuadruplets(vector<int>& nums) {
  int n = nums.size();
  int count = 0;
  map<int, int> map;
  map[nums[n-1]]++;
  for (int c = n-2; c > 1; c--) {
    for (int b = c-1; b > 0; b--) {
      for (int a = b-1; a >= 0; a--) {
        count += map[(nums[a] + nums[b] + nums[c])];
      }
    }
    map[nums[c]]++;
  }
  return count;
}
};

int main() {
    vector<int> nums = {1, 2, 3, 6};
    Solution s;
    std::cout << s.countQuadruplets(nums) << endl;
}
