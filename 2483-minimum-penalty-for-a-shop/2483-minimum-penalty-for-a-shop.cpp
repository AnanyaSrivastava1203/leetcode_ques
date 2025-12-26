class Solution {
public:
    int bestClosingTime(string customers) {
        int besttime=0;
        int minPenality=0;
        int prefix=0;
        for(int i=0;i<customers.size();i++){
            prefix+=customers[i]=='Y'? -1:1;
            if(prefix<minPenality){
                besttime=i+1;
                minPenality=prefix;
            }
        }
        return besttime;
    }
};