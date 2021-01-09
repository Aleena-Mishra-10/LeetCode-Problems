class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        bool peak=false;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1] && peak) return false;
            if(arr[i]>arr[i+1]) {
                if(i>0 and arr[i-1]<arr[i]) peak=true;
                if(!peak) return false;
            }
            else if(arr[i]==arr[i+1]){
                return false;
            }
            
        }
        return (!peak) ? false:true;
    }
};
