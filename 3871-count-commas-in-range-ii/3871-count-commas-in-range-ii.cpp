class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        for(int i=4;i<=16;i++){//iterting over digit lengths
            long long commas=(i-1)/3;//number of commas when digit is i
            //now calculate the range of numbers with exactly i digits
            long long left=pow(10,i-1);//the smallest number with i digits
            long long right=pow(10,i)-1;//the largest number with i digits
            
            if(left>n){//break since larger digit lengths aren't possible
                break;
            }
            long long numbers=min(right,n)-left+1;//count how many numbers from this range lies within [1,n]
            ans+=(commas*numbers);//add the contributions
        }
        return ans;
    }
};