class Solution {
    public int uniqueMorseRepresentations(String[] words) {
         String[] table = new String[]{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        Set<String> unique = new HashSet<String>();
        for(int i = 0; i < words.length; i++){
            String data = "";
            for(int j = 0; j < words[i].length(); j++){
                data += table[words[i].charAt(j) - 'a'];
            }
            unique.add(data);
        }
        
        return unique.size();
    }
}
