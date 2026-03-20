class Solution {
public:
    int longestArithmetic(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;

        int ans=2;
        vector<int> left(n,2);
        vector<int> right(n,2);

        for(int i=2;i<n;i++){//precompute left arithmetic length
        //left[i]=left of arithmetic subarray ending at index i
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                left[i]=left[i-1]+1;
            }
        }

        for(int i=n-3;i>=0;i--){//precompute right arithmetic length
        //right[i]=length of arithmetic subarray starting at index i
            if(nums[i+2]-nums[i+1]==nums[i+1]-nums[i]){
                right[i]=right[i+1]+1;
            }
        }

        for(int i=0;i<n;i++){//now we try modifying every index
            ans=max(ans,max(left[i],right[i]));//initially finding the maximum we have

            if(i==0){//handle edge case; only right length can be extended
                ans=max(ans,1+right[i+1]);
            }
            else if(i==n-1){//handle edge case; only left length can be extended
                ans=max(ans,1+left[i-1]);
            }
            else{
                ans=max(ans,1+left[i-1]);//case 1:extend left sequence
                ans=max(ans,1+right[i+1]);//case 2:extend right sequence
                if(((nums[i+1]-nums[i-1])%2)==0){//case 3:merge left and right sequence
                //if it can be merged then the difference of nums[i+1]-nums[i-1] will be even
                    int req=(nums[i+1]-nums[i-1])/2;//required difference
                    int leftlen=1,rightlen=1;
                    if(i>=2 && (nums[i-1]-nums[i-2]==req)){//so the left part can be included
                        leftlen=left[i-1];
                    }
                    if(i<n-2 && (nums[i+2]-nums[i+1]==req)){//thus the right part can be included
                        rightlen=right[i+1];
                    }
                    ans=max(ans,1+rightlen+leftlen);
                }

            }
        } 
        return ans;       
    }
};