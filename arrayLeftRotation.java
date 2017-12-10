import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static int[] arrayLeftRotation(int[] a, int n, int k) {
      int[] swap = new int[n];
      int index = 0;
      for(int i = 0;i < a.length; i++)
      {
          index = i - k;
          if(index < 0)
          {
              swap[index+a.length] = a[i];
          }
          else{
              swap[index] = a[i];
          }
      }
        return swap;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
      
        int[] output = new int[n];
        output = arrayLeftRotation(a, n, k);
        for(int i = 0; i < n; i++)
            System.out.print(output[i] + " ");   
        System.out.println();
      
    }
}
