import 'dart:math';

void main() {
  final l1 = ListNode(2);
  final l2 = ListNode(9);

  final sol = Solution().addTwoNumbers(l1, l2);

  print(sol);
}

class ListNode {
  int val;
  ListNode? next;
  ListNode([this.val = 0, this.next]);

  @override
  String toString() {
    return next == null ? '$val' : '$val -> ${next.toString()}';
  }
}

class Solution {
  ListNode? insert_node(ListNode? head, int val) {
    ListNode? aux = head;

    if (head == null) {
      return ListNode(val);
    }

    while (aux!.next != null) {
      aux = aux.next;
    }
    aux.next = ListNode(val);

    return head;
  }

  ListNode? addTwoNumbers(ListNode? l1, ListNode? l2) {
    ListNode? ans;
    int carry = 0;

    while (l1 != null || l2 != null || carry != 0) {
      int v1 = 0;
      int v2 = 0;

      if (l1 != null) {
        v1 = l1.val;
        l1 = l1.next;
      }
      if (l2 != null) {
        v2 = l2.val;
        l2 = l2.next;
      }

      final sum = v1 + v2 + carry;
      print('sum: $v1 + $v2 + $carry = $sum');

      ans = insert_node(ans, sum % 10);
      carry = (sum / 10).floor();
    }

    return ans;
  }
}
