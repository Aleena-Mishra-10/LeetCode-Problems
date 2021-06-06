// Sort incoming values in descending order of efficiency
// Why? This way whenever you are calculating answer for
// current state then you will have minimum efficiency for 
// that state with you , if the number of engineers exceeds k
// then remove the engineer with least speed from current state 
// this works because efficiency of the group is fixed with coming engineer 
// and the only thing that matters for performance now is speed

// TC : O(nlogn)
// SC : O(n)

class Solution {
    public int maxPerformance(int n, int[] speed, int[] efficiency, int k) {
        Engineer arr[] = new Engineer[n];
        for(int i=0;i<n;i++) arr[i] = new Engineer(speed[i],efficiency[i]);
        Arrays.sort(arr); // sort in descending order of efficiency
        int m = 1000000007; // to avoid overflow 
        PriorityQueue<Integer> pq = new PriorityQueue(); // min heap so that we
        // can remove engineer with lowest speed from group if group size>k
        long totalSpeed = 0;
        long ans = Long.MIN_VALUE;
        
        for(Engineer engineer : arr){
            if(pq.size()<k){ 
                pq.add(engineer.speed);
                totalSpeed+=engineer.speed;
            }else{ // size will exceed k if current engineer becomes 
                // part of group so remove engineer which has slowest speed
                // from the group
                totalSpeed-=pq.remove();
                pq.add(engineer.speed);
                totalSpeed+=engineer.speed;
            }
            ans = Math.max(ans,totalSpeed*engineer.efficiency); // if answer for current state
            // exceeds answer so far then update answer so far
        }
        
        return (int)(ans%m);
    }
}
class Engineer implements Comparable<Engineer>{
    int speed;
    int efficiency;
    
    public Engineer(int speed , int efficiency){
        this.speed=speed;
        this.efficiency = efficiency;
    }
    
    public int compareTo(Engineer other){
        if(this.efficiency>other.efficiency) return -1;
        else if(this.efficiency<other.efficiency) return 1;
        return 0;
    }
}
