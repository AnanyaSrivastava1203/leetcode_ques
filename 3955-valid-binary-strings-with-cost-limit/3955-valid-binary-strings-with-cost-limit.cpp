class Solution {
public:
    vector<string> ans;
    void solve(int n,int k,int idx,int cost,bool prevOne,string &curr){
        if(cost>k) return;
        if(idx==n){
            ans.push_back(curr);
            return;
        }
        curr.push_back('0');
        solve(n,k,idx+1,cost,false,curr);
        curr.pop_back();

        if(prevOne==false){
            curr.push_back('1');
            solve(n,k,idx+1,cost+idx,true,curr);
            curr.pop_back();
        }
    }
    vector<string> generateValidStrings(int n, int k) {
        string str;
        solve(n,k,0,0,false,str);
        return ans;
    }
};