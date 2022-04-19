import java.util.Scanner;

public class Codeforces_731A{
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    String s = in.next();
    
    int l = 0;
    int movs=0;
    for(char c: s.toCharArray()) {
      int i = c-'a';
      if(l<i) {
        if(i-l < l+26-i) {
          movs += i-l;
        } else {
          movs += l+26-i;
        }
      } else if(l > i) {
        if(l-i < 26-l+i) {
          movs += l-i;
        } else {
          movs += 26-l+i;
        }
      }
      l=i;
      //System.out.printf("%c(%d) -> l:%d movs:%d \n", c, i, l, movs);
    }

    System.out.println(movs);
  }
}