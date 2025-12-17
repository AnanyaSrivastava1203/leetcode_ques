class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        vector<string> temp;
        int n=nums.size();
        for(int i=0;i<n;i++){//making a vector of reflected binary form of numbers
            string s="";
            int num=nums[i];
            while(num>0){
                s=s+to_string(num%2);
                num=num/2;
            }
            temp.push_back(s);
        }
        vector<int> numform;
        for(string s:temp){//converting the string vector into integer vector of binary reflected numbers
            numform.push_back(stoi(s,0,2));
        }
        vector<pair<int,int>> v;//to pair the binary form and integer form of the numbers
        for(int i=0;i<n;i++){
            v.push_back({numform[i],nums[i]});
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};