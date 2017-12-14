import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Solution {
    public static int numberNeeded(String first, String second) {
      HashMap<Character,Integer> firstM = new HashMap<>();
      HashMap<Character,Integer> secM = new HashMap<>();
      for(int i = 0; i < first.length(); i++)
      {
          Character c = Character.valueOf(first.charAt(i));
          if(firstM.containsKey(c)){
              firstM.put(c,firstM.get(c)+1);}
          else{
              firstM.put(c,1);}
      }
      for(int i = 0; i < second.length(); i++)
      {
          Character d = Character.valueOf(second.charAt(i));
          if(secM.containsKey(d)){
              secM.put(d,secM.get(d)+1);}
          else{
              secM.put(d,1);}
      }   
      int count = 0;
      for(Character j : firstM.keySet())
      {
          if(secM.containsKey(j)){
              if(!(secM.get(j).intValue() ==  firstM.get(j).intValue()))
              {
                  if(firstM.get(j).intValue() > secM.get(j).intValue()){count += 2*secM.get(j).intValue();}
                  else{count += 2*firstM.get(j).intValue();}
              }
              else{count += 2*firstM.get(j).intValue();}
          }
          
      }       
      return first.length()+second.length()-count;  
    }
  
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(numberNeeded(a, b));
    }
}
