class Solution {
public:
    bool judgeCircle(string moves) {
        int U=0,R=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U'){
                U++;
            }
            else if(moves[i]=='D'){
                U--;
            }
            else if(moves[i]=='R'){
                R++;
            }
            else{
                R--;
            }
        }
        if(U==0 && R==0){
            return true;
        }
        
           return false;
    
    }
};
