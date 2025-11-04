class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<=n-k;i++){
            vector<int> sub(nums.begin()+i,nums.begin()+i+k);//getting the subarray of size k
            unordered_map<int,int> freq;
            for(int num:sub){//calculating the frequencies of k-sized subarray
                freq[num]++;
            }
            vector<pair<int,int>> items(freq.begin(),freq.end());//convert the map into vector so that it can be sorted easily as per requirement
            sort(items.begin(),items.end(),[](auto &a,auto &b){
                if(a.second==b.second) return a.first>b.first;//if the frequencies are same then by value in descending order
                return a.second>b.second;//otherwise sort in descending order of frequencies
            });
            unordered_set<int> top_x;
            for(int j=0;j<items.size() && j<x;j++){
                top_x.insert(items[j].first);
            }
            int x_sum=0;
            for(int num:sub){
                if(top_x.count(num)) x_sum+=num;
            }
            ans.push_back(x_sum);
        }
        return ans;
    }
};