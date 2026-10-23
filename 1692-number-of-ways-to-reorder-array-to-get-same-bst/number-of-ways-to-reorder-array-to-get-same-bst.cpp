class Solution {
    const long long MOD = 1e9 + 7;
    vector<vector<long long>> C;
    
    long long ways(vector<int>& a) {
        int n = a.size();
        if (n <= 2) return 1;
        vector<int> l, r;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[0]) l.push_back(a[i]);
            else r.push_back(a[i]);
        }
        long long left_ways = ways(l);
        long long right_ways = ways(r);
        
       
        long long res = (C[n - 1][l.size()] * left_ways) % MOD;
        res = (res * right_ways) % MOD;
        return res;
    }

public:
    int numOfWays(vector<int>& nums) {
        int n = nums.size();
        C.assign(n + 1, vector<long long>(n + 1, 0));
        for (int i = 0; i <= n; i++) {
            C[i][0] = 1;
            for (int j = 1; j <= i; j++) {
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
            }
        }
        return (ways(nums) - 1 + MOD) % MOD;
    }
};