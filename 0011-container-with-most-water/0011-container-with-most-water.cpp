class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1,maxarea=0;
        while(i<j){
            maxarea=max(maxarea,(j-i)*min(height[i],height[j]));
            if(height[i]<height[j])
            i++;
            else
            j--;
        }
        return maxarea;
    }
};