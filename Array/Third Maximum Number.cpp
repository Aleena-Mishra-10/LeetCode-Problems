class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max1=-2147483649,max2=-2147483649,max3=-2147483649;
        for(auto a:nums){
            if(a==max1 || a==max2 || a==max3){
                continue;
            }
            if(max1==-2147483649 || a>max1){
                max3=max2;
                max2=max1;
                max1=a;
            }
            else if(max2==-2147483649|| a>max2){
                max3=max2;
                max2=a;
            }
            else if(max3==-2147483649|| a>max3){
                max3=a;
            }
        }
        return max3!=-2147483649 ? max3:max1;
    }
};
