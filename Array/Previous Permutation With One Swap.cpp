class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
       int n = arr.size(), i, pos;
        for(i = n-2; i >= 0; i--) {
            if(arr[i] > arr[i+1]) {
                pos = i;
                break;
            }
        }
        if(i < 0) return arr;
        else {
            for(i = n-1; i >= pos+1; i--) {
                if(arr[i] < arr[pos] && arr[i] != arr[i-1]) {
                    swap(arr[i], arr[pos]);
                    break;
                }
            }
            return arr;
        }  
    }
};
