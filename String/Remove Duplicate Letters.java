class Solution {
    public String removeDuplicateLetters(String s) {
        Map<Character, Integer> map = new HashMap<>(); // keep track of the last index of everyone
        Stack<Character> stack = new Stack<>(); // best for keeping track of previous characters
        Map<Character, Boolean> visited = new HashMap<>(); //checks if that character is finally visited
        
        //purpose of this was to keep track of the last available index of any character
        for(int i = 0; i < s.length(); i++) {
            map.put(s.charAt(i) , i);   
            visited.put(s.charAt(i), false);
        }
        
        for(int i = 0; i < s.length(); i++) {
            
            char current = s.charAt(i);
            //if the character is already visited then move on
            if(visited.get(current)) {
                continue;
            }
            /*main part :-
                If the stack is not empty and the previous character is greater and also the 
                prvious charater is available afterwards the current :
                    remove the higher char and also mark it as unvisited (as afterwards we will visit it)
            */
            while(!stack.isEmpty() && stack.peek() > current && i < map.get(stack.peek())) {
                char temp = stack.pop();
                visited.put(temp, false);
            }
            //add the currect to our stack 
            stack.push(current);
            //mark it visited
            visited.put(current, true);
        }
        
        StringBuilder sb = new StringBuilder("");
        while(!stack.isEmpty()) {
            sb.append(stack.pop());
        }
        
        return sb.reverse().toString();
    }
}
