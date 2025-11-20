class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& in) {
        sort(in.begin(),in.end(),[](const vector<int>& a,const vector<int>& b){
            return a[1]<b[1];
        });
        int prev1=in[0][1]-1;
        int prev2=in[0][1];
        int cnt=2;
        for(int i=1;i<in.size();i++){
            int start=in[i][0];
            int end=in[i][1];
            if(prev2<start){
                prev1=end-1;
                prev2=end;
                cnt+=2;
            }
            else if(prev1<start){
                if(end==prev2) prev1=end-1;
                else prev1=end;
                if(prev1>prev2) swap(prev1,prev2);
                cnt+=1;
            }
        }
        return cnt;
    }
};