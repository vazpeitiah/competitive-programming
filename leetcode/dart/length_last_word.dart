void main() {
  final sol = Solution().lengthOfLastWord('Hello World');

  print(sol);
}

class Solution {
  int lengthOfLastWord(String s) {
    final worlds = s.trim().split(' ');

    return worlds.last.length;
  }
}
