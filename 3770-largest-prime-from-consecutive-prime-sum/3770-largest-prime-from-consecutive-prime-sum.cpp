class Solution {
public:
    int largestPrime(int n) {
        if(n<2) return 0;
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }
        vector<int> primes;
        for(int i=2;i<n+1;i++){
            if(prime[i]) primes.push_back(i);
        }
        int sum=0,largest=0,sz=primes.size();
        int i=0;
        for(;sum<=n && i<sz;i++){
            sum+=primes[i];
            if(sum>n) break;
            if(prime[sum]) largest=sum;
        }
        return largest;
    }
};