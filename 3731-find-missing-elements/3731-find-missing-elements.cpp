class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> miss;
        int s=*min_element(nums.begin(),nums.end());
        int l=*max_element(nums.begin(),nums.end());
        for(int i=s;i<=l;i++){
            auto it=find(nums.begin(),nums.end(),i);
            if(it!=nums.end()) continue;
            miss.push_back(i);
        }
        return miss;
    }
};