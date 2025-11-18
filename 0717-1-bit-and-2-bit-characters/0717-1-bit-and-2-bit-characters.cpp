class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size(),prev=-1;
        int i=0;
        while(i<n-1){
            if(bits[i]==0){
                i+=1;
            }
            else{
                i+=2;
            }
        }
        if(i==n-1) return true;
        return false;
    }
};