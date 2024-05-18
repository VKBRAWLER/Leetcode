import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Solution {
  public int[] intersection(int[] nums1, int[] nums2) {
      Map<Integer, Integer> map = new HashMap<>();
      for (int num : nums1) {
          map.put(num, map.getOrDefault(num, 0) + 1);
      }
      
      List<Integer> resultList = new ArrayList<>();
      for (int num : nums2) {
          if (map.containsKey(num)) {
              resultList.add(num);
              map.remove(num);
          }
      }
      
      int[] result = new int[resultList.size()];
      for (int i = 0; i < resultList.size(); i++) {
          result[i] = resultList.get(i);
      }
      
      return result;
  }
}    

class Main {
  public static void main (String[] args) {
    Solution s = new Solution();
    int[] nums1 = {1,2,2,1};
    int[] nums2 = {2,2};
    int[] result = s.intersection(nums1, nums2);
    for (int i: result) {
      System.out.println(i + ' ');
    }
  }
}