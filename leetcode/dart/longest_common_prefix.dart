/* https://leetcode.com/problems/longest-common-prefix/ */

import 'dart:math';

void main() {
  final ans = Solution().longestCommonPrefix([
    'Flower',
    'Flow',
    'Float',
  ]);

  print(ans);
}

class Solution {
  String longestCommonPrefix(List<String> strs) {
    int minLen = strs.reduce((i, j) => i.length < j.length ? i : j).length;

    int m = 0;
    bool equals = true;
    String prev = '';

    while (equals && m < minLen) {
      for (var i = 0; i < strs.length && equals; i++) {
        print(strs[i]);

        if (i == 0) {
          prev = strs[i][m];
        } else if (prev != strs[i][m]) {
          equals = false;
        }
      }

      if (equals) m++;
    }

    return strs[0].substring(0, m);
  }
}
