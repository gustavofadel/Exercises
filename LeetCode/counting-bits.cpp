class Solution {
public:
    vector<int> countBits (int n) {
        vector<int> ans(n + 1), table(1 << 8, 0);
        for (int i = 0; i < (1 << 8); table[i] = table[i >> 1] + (i & 1), i++);
        for (int i = 0; i <= n; ans[i] = table[i & 0xff] + table[(i >> 8) & 0xff] + table[(i >> 16) & 0xff] + table[i >> 24], i++);
        return ans;
    }
};