class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7;

        long long res = k;
        long long count = 0;
        long long cost = 0;

        for (int x : nums) {
            if (res < x) {
                long long need = x - res;
                long long t = (need + k - 1) / k;

                cost = (cost +
                    (t % MOD) * (count % MOD) % MOD +
                    (t % MOD) * ((t + 1) % MOD) / 2) % MOD;

                count += t;
                res += t * 1LL * k;
            }

            res -= x;
        }

        return cost % MOD;
    }
};