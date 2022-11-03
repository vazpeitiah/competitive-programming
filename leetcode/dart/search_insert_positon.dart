void main() {
  final sol = Solution().searchInsert([1, 3], 2);

  print(sol);
}

class Solution {
  int searchInsert(List<int> nums, int target) {
    int i = 0;
    int j = nums.length;

    while (i < j) {
      int m = ((i + j) / 2).floor();

      if (nums[m] == target) {
        return m;
      }

      if (target < nums[m]) {
        j = m - 1;
      } else {
        i = m + 1;
      }
    }


    if (nums[i] < target) {
      return i + 1;
    }

    return i;
  }
}
