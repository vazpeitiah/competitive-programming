void main() {
  final sol = Solution().addBinary('1010', '1011');
  print(sol);
}

class Solution {
  String addBinary(String a, String b) {
    List<String> aa = a.split('');
    List<String> ab = b.split('');

    List<String> ans = [];

    if (aa.length < ab.length) {
      aa = [...List.generate(ab.length - aa.length, (index) => '0'), ...aa];
    } else {
      ab = [...List.generate(aa.length - ab.length, (index) => '0'), ...ab];
    }

    print('a: $aa');
    print('b: $ab');

    bool carry = false;

    for (var i = aa.length - 1; i >= 0; i--) {
      String sum;
      if (aa[i] != ab[i]) {
        sum = '1';
      } else {
        sum = '0';
      }

      if (carry) {
        if (sum == '0') {
          sum = '1';
          carry = false;
        } else {
          sum = '0';
          carry = true;
        }
      }

      if (aa[i] == '1' && ab[i] == '1') {
        carry = true;
      }

      ans.add(sum);
    }

    if (carry) {
      ans.add('1');
    }

    print('sum: $ans');
    return ans.reversed.join();
  }
}
