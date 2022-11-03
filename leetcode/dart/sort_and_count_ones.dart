import 'dart:collection';

void main() {
  final sol = Solution().sortByBits([
    7850,
    8192,
    1878,
    2687,
    6878,
    7410,
    763,
    365,
    9869,
    8744,
    2741,
    4871,
    5844,
    2715,
    3335,
    9651,
    6677
  ]);
  print(sol);
}

class Solution {
  List<int> sortByBits(List<int> arr) {
    SplayTreeMap<int, List<int>> map = SplayTreeMap();
    final List<int> result = [];
    arr.forEach((n) {
      final c = countOnes(n);
      if (!map.containsKey(c)) {
        map[c] = [n];
      } else {
        map[c] = [...map[c]!, n];
      }
    });

    map.forEach((key, value) => result.addAll(value..sort()));

    return result;
  }

  int countOnes(int n) {
    int ans = 0;

    while (n > 0) {
      ans++;
      n = n & (n - 1);
    }

    return ans;
  }
}
