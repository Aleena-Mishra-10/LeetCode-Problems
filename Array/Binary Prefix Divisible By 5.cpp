class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        
        vector<bool>v;
        int n=A.size();
        int num=A[0];
          if(num%5==0){
              v.push_back(true);
          }
        else{
            v.push_back(false);
        }
        for(int i=1;i<A.size();i++){
            
            num=(num<<1|A[i]);
            if(num%5==0){
                num=num%5;
                v.push_back(true);
            }
            else{
                num=num%5;
                v.push_back(false);
            }
        }
        return v;
    }
};
