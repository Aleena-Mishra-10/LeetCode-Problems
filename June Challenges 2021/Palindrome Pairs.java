class Solution {
    public List<List<Integer>> palindromePairs(String[] words) {
        List<List<Integer>> ans = new ArrayList<>();

        //In future, we need to know the index of the word. For this purpose, we create a map
        Map<String, Integer> map = new HashMap<>();
        for (int i = 0; i < words.length; i++) map.put(words[i], i);

		//Case 1 - Empty string case
        /*
			If there is an empty string in the array(e.g "") in the array that means that every words[i] that is palindrome could be paired with an empty 
			string. e.g if there are words[1] = "aba" and word[5] = "" we can make pairs of it like this [1, 5] and [5, 1], 
			because "aba" + "" = "aba" and "" + "aba" = "aba" as well. 
		*/
        if (map.containsKey("")) {
            Integer emptyStrIndex = map.get("");
            for (int i = 0; i < words.length; i++) {
                if (emptyStrIndex != i && isPalindrome(words[i])) {
                    ans.add(Arrays.asList(i, emptyStrIndex));
                    ans.add(Arrays.asList(emptyStrIndex, i));
                }
            }
        }

        //Case 2 - Reflection Case
		/*
			Here we need to check for reflection case. e.g if words[i] == "abc" and there are "cba" available somewhere in the array it means that 
			we can form a palindrome. Same happens when words[i] == "cba" it will check for "abc"
		*/
        for (int i = 0; i < words.length; i++) {
            String reversed = new StringBuilder(words[i]).reverse().toString();
            if (map.containsKey(reversed)) {
                int reversedIndex = map.get(reversed);
                if (reversedIndex != i) {
                    ans.add(Arrays.asList(i, reversedIndex));
                }
            }
        }

        //Case 3 - Partition Case
		/*
		This case is trickier. Basically what we are doing here is that we are checking every possible substring of words[i] 
		if contains palindrome string. If it does the reversed remaining part(out of substring) should be found somewhere 
		in the array to form a palindrome using word[i]. 
		e.g words[i] = "abade" we can partition it with these chunks 
		left = "a" right = "bade"
		left = "ab" right = "ade"
		left = "aba" right = "de"
		left = "abad" right = "e"
		So here the third case left = "aba" which is a palindrome. The remaining part is "de"(Reversed is "ed"). 
		Therefore if somewhere in the array there is string "ed" it means that we can form palindrome by adding "ed" + "aba[de]" = "edabade"
		We need to check it for both left and right parts
		*/
        for (int i = 0; i < words.length; i++) {
            String word = words[i];
            for (int j = 1; j < word.length(); j++) {
                String left = word.substring(0, j);
                String right = word.substring(j);

                if(isPalindrome(left)){
                    Integer foundIndex = map.get(new StringBuilder(right).reverse().toString());
                    if(foundIndex != null){
                        ans.add(Arrays.asList(foundIndex, i));
                    }
                }

                if(isPalindrome(right)){
                    Integer foundIndex = map.get(new StringBuilder(left).reverse().toString());
                    if(foundIndex != null){
                        ans.add(Arrays.asList(i, foundIndex));
                    }
                }
            }
        }

        return ans;
    }

    private boolean isPalindrome(String str) {
        int i = 0, j = str.length() - 1;
        while (i <= j) if (str.charAt(i++) != str.charAt(j--)) return false;
        return true;
    }
}
