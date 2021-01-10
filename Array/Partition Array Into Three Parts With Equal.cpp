class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int x:arr){
            sum+=x;
        }
        if(sum%3!=0){
            return false;
        }
        int partSum=sum/3;
        int part=0;
        int temp=0;
        for(int x:arr){
            temp+=x;
            if(temp==partSum){
                part++;
                temp=0;
            }
        }
        return (part>=3);
    }
};
