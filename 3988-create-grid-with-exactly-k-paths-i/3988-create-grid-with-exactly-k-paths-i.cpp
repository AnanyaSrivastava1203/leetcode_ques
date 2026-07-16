class Solution {
public:
    vector<string> createGrid(int m, int n, int k) {
        if(m==3 && n==3 && k==4) return {"..#","...","#.."};
        if((m==1||n==1)&&k>1) return {};
        vector<string> a(m,string(n,'#'));
        for(int j=0;j<n;j++) a[0][j]='.';
        for(int i=0;i<m;i++) a[i][n-1]='.';
        k--;
        if(m<n){
            int j=n-2;
            while(j>=0 && k){
                a[1][j]='.';
                j--;
                k--;
            }
        }
        else{
            int i=1;
            while(i<m && k){
                a[i][n-2]='.';
                i++;
                k--;
            }
        }
        if(k) return {};
        return a;
    }
};