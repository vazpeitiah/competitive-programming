package omegaup.string;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Omegaup_11232 {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    String input;
    input = scan.nextLine();
    
    String ss[] = input.split(" ");

    String word = ss[0];
    char c = ss[1].charAt(0);

    Map<Character, Integer> map = new HashMap<>();
    
    for(int i=0; i<word.length(); i++) {
      char key = word.charAt(i);
      if(!map.containsKey(key)) {
        map.put(key, 1);
      } else {
        map.put(key, map.get(key) + 1);
      }
    }

    System.out.print(map.get(c));

    scan.close();
  } 
}