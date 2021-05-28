 public String truncateSentence(String s, int k) {
        StringBuilder str = new StringBuilder();
        String[] arr = s.split(" ");
        for(int i = 0;i< k;i++){
            str.append(arr[i]);
            if(i != k-1)
                str.append(" ");        
        }
        return str.toString();
        
    }
