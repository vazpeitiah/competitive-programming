import java.util.Arrays;
import java.util.Scanner;

public class Codeforces_189A{
  static int a, b, c;
  static int dp[] = new int[8000];

  static int solve(int n) {
    if(n==0) return 0;
    if(dp[n] != -1) return dp[n];

    int res = Integer.MIN_VALUE;

    if(n >= a) {
      res = Math.max(res, solve(n-a) + 1);
    }
    if(n >= b) {
      res = Math.max(res, solve(n-b) + 1);
    }
    if(n >= c) {
      res = Math.max(res, solve(n-c) + 1);
    }

    dp[n] = res;
    return res;
  }

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    a = in.nextInt();
    b = in.nextInt();
    c = in.nextInt();

    Arrays.fill(dp, -1);

    System.out.println(solve(n));
  }
}