 public class stringcontainsvowels {
    public static void main(String[] args) {
        System.out.println(stringContainsVowels("hello")); // true
        System.out.println(stringContainsVowels("hye"));   // true
        System.out.println(stringContainsVowels("sky"));   // false
    }

    public static boolean stringContainsVowels(String str) {
        str = str.toLowerCase();
        
        for (char c : str.toCharArray()) {
            if ("aeiou".indexOf(c) != -1) {
                return true; 
            }
            
        }
        return false; 
    }
}