package codeforces.java;

import java.util.Scanner;

public class Codeforces_707A {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int m = in.nextInt();
    
    String s;
    boolean bw = true;

    for(int i=0; i<n && bw; i++) {
      for(int j=0; j<m; j++) {
        s = in.next();
        if(s.equals("C") || s.equals("M") || s.equals("Y")) {
          bw = false;
          break;
        }
      }
    }

    System.out.println(bw ? "#Black&White" : "#Color");
    in.close();
  }
}