package codeforces.java;

import java.util.Scanner;

public class Codeforces_460A {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    int n, m;
    n = scan.nextInt();
    m = scan.nextInt();

    int days=0;

    while(n > 0) {
      days++;
      if(days%m == 0) {
        n++;
      }
      n--;
    }

    System.out.println(days);

    scan.close();
  }
}