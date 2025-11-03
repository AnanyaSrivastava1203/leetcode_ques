class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i=0,j=0,n=colors.length();
        int totaltime=0,sum=0,maxtime=0;
        while(j<n){
            if(i==j){
                sum+=neededTime[j];
                maxtime=neededTime[j];
            }
            else if(colors[i]==colors[j]){
                maxtime=max(maxtime,neededTime[j]);
                sum+=neededTime[j];
            }
            else{
                totaltime+=(sum-maxtime);
                sum=0;
                maxtime=0;
                i=j;
                j--;
            }
            j++;
        }
        totaltime+=(sum-maxtime);
        return totaltime;
    }
};