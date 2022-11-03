void main() {
  final nums = [1, 1, 2, 2, 3, 3, 4, 4, 6];

  Solution().removeDuplicates(nums);
}

class Solution {
  int removeDuplicates(List<int> nums) {
    int len = 0;
    int i = 0, j = 1;
    while (i < nums.length && j < nums.length) {
      print('${nums[j]} > ${nums[i]}');
      if (nums[j] > nums[i]) {
        nums[i + 1] = nums[j];
        i++;
        len++;
      }
      j++;
    }
    return len + 1;
  }
  
  // O(n) complex  
  int removeDuplicatesTwoPointers(List<int> nums) {
    int k = 1;
    for(var i=1; i<nums.length; i++) {
      if(nums[i-1] != nums[i]) {
        nums[k] = nums[i];
        k++;
      }
    }
    return k;
  }
}
