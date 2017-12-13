import java.util.*;

public class Solution {
    Map<String, Integer> magazineMap;
    Map<String, Integer> noteMap;
    
    public Solution(String magazine, String note) {
        magazineMap = new HashMap<>();
        noteMap = new HashMap<>();
        String[] a = magazine.split(" ");
        String[] b = note.split(" ");
        int lenA = a.length;
        int lenB = b.length;
        int large;
        if(lenA > lenB){ large = lenA;}else{large = lenB;}
        for(int i = 0;i < large;i++)
        {
            if(i < lenA){
                if(!(magazineMap.containsKey(a[i]))){
                    magazineMap.put(a[i],new Integer(1));
                }
                else{
                    int numA = magazineMap.get(a[i]).intValue();
                    magazineMap.put(a[i],new Integer(numA+1));
                }
            }
            if(i < lenB){
                if(!(noteMap.containsKey(b[i]))){
                    noteMap.put(b[i],new Integer(1));
                }
                else{
                    int numB = noteMap.get(b[i]).intValue();
                    noteMap.put(b[i],new Integer(numB+1));
                }
                
            }
        }
    }
    
    public boolean solve() {
        if(noteMap.size() > magazineMap.size()){return false;}
        for(String s : noteMap.keySet())
        {            
            int value;
            if(magazineMap.containsKey(s)){
                value = magazineMap.get(s).intValue();
                if((noteMap.get(s).intValue() - value) > 0){
                    return false;
                }
            }
            else{
                return false;
            }
                
        }
        return true;
        
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int n = scanner.nextInt();
        
        // Eat whitespace to beginning of next line
        scanner.nextLine();
        
        Solution s = new Solution(scanner.nextLine(), scanner.nextLine());
        scanner.close();
        
        boolean answer = s.solve();
        if(answer)
            System.out.println("Yes");
        else System.out.println("No");
      
    }
}
