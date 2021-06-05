class Solution {
    public int openLock(String[] deadends, String target) {
        
        Set<String> deadSet = new HashSet<>();
        for(String str:deadends) deadSet.add(str);
        Set<String> visited =  new HashSet<>();
        Queue<String> que = new LinkedList<>();
        que.add("0000");
        int dep = 0;
        while(!que.isEmpty()){
            int queSize = que.size();
            for(int i=0;i<queSize;i++){
                String cur = que.poll();
                if(deadSet.contains(cur) || visited.contains(cur)) continue;
                if(cur.equals(target)) return dep;
                for(int j=0;j<4;j++){
                    int next = (cur.charAt(j) - '0' + 1) % 10;
                    int prev = (10 + cur.charAt(j) - '0' - 1) % 10;
                    que.offer(cur.substring(0,j) + next + cur.substring(j+1));
                    que.offer(cur.substring(0,j) + prev + cur.substring(j+1));
                }
                visited.add(cur);
            }
            dep++;
        }
        return -1;
    }
}
