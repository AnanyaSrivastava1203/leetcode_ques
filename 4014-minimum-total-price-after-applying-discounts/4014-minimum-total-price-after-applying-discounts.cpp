class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n=prices.size();
        int m=discounts.size();
        sort(discounts.rbegin(),discounts.rend());
        sort(prices.rbegin(),prices.rend());
        double total=0.0;
        int i=0,j=0;
        while(i<n && j<m){
            total+=(double)(prices[i]*(double)(100-discounts[j])/100);
            i++;
            j++;
        }
        while(i<n){
            total+=prices[i++];
        }
        return total;
    }
};