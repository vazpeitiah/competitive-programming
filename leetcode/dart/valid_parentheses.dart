void main() {
  String str = '[[][]()()()((((())()()()())))]';
  bool isValid = Solution().isValid(str);

  print('$str is ${isValid ? 'valid' : 'invalid'} parentheses string');
}

class Solution {
  bool isValid(String s) {
    List<String> stack = <String>[];
    Map<String, String> map = {
      '[': ']',
      '{': '}',
      '(': ')',
    };

    for (var i = 0; i < s.length; i++) {
      if (map.containsKey(s[i])) {
        stack.add(map[s[i]]!);
      } else {
        if (stack.isNotEmpty && stack.last == s[i]) {
          stack.removeLast();
        } else {
          return false;
        }
      }
    }

    return stack.isEmpty;
  }
}
