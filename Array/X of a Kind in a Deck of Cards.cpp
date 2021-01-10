class Solution {
public:
    int getGcd(int number1, int number2)
    {
        // get the greatest common divisor
		
        while(number1 != number2)
        {
            if(number1 > number2)
                number1 -= number2;
            else
                number2 -= number1;
        }
        
        return number1;
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int> mp;
        for(int i=0;i<deck.size();i++){
            mp[deck[i]]++;
        }
        vector<int> v;
        for(auto &it:mp){
            v.push_back(it.second);
        }
        auto min_val=min_element(v.begin(),v.end());
        if(*min_val < 2) return false;
        int gcd=1;
        for(auto t:v){
            if(gcd==1){
                gcd=getGcd(t,*min_val);
            }
            else
            {
                gcd = getGcd(getGcd(t, *min_val), gcd);
            }
            
            if (gcd < 2) return false;
        }
        return true;
    }
};
