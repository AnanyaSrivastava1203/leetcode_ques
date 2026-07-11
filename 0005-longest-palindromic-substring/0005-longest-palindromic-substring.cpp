class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1) return s;


        //lambda function to do the computation inside the function itself
        // [&] is capture list. it allows all the outside variable to automatically get captured inside the lambda function, instead of passing the outside variable as a parameter
        auto expand_from_center=[&](int left,int right){//center se bahar ki taraf palindrome substring find krenge
            while(left>=0 && right<s.length() && s[left]==s[right]){
                left--;
                right++;
            }
            left++;
            right--;
            return s.substr(left,right-left+1);
        };
        string max_substr=s.substr(0,1);
        for(int i=0;i<s.size()-1;i++){//center ya toh i hoga(if odd palindrome) or i & i+1 hoga(if even palindrome)
            string odd=expand_from_center(i,i);
            string even=expand_from_center(i,i+1);
            if(odd.length()>max_substr.size())
            max_substr=odd;
            if(even.length()>max_substr.size())
            max_substr=even;
        }
        return max_substr;
    }
};