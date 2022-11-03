void main() {
  final sol = Solution().firstUniqChar('leetcode');

  print(sol);
}

class Solution {
  int firstUniqChar(String s) {
    Map<String, int> map = {};

    s.split('').forEach(
        (c) => map.containsKey(c) ? map[c] = map[c]! + 1 : map.addAll({c: 1}));

    for (var i = 0; i < s.length; i++) {
      if (map[s[i]] == 1) {
        return i;
      }
    }

    return -1;
  }
}
