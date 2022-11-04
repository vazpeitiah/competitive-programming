void main() {
  final sol = Solution().plusOne([9, 9, 9, 9]);

  print(sol);
}

class Solution {
  List<int> plusOne(List<int> digits) {
    List<int> ans = [...digits];

    for (var i = digits.length - 1; i >= 0; i--) {
      final res = digits[i] + 1;
      if (res < 10) {
        ans[i] = res;

        break;
      }

      if (i == 0) {
        ans.add(0);
        ans[i] = 1;
        break;
      }
      ans[i] = 0;
    }

    return ans;
  }
}
