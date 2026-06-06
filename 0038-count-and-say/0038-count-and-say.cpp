class Solution {
public:
    string solve(int n,string str){
        if(n==1){
            return str;
        }
        string s="";
        int l=str.size();
        int i=0;
        
        while(i<l){
            int j=i;
            while(j<l && str[i]==str[j]){
                j++;
            }
            s+=to_string(j-i);
            s+=str[i];
            i=j;
        }
        return solve(n-1,s);
    }

    string countAndSay(int n) {
        return solve(n,"1");
    }
};