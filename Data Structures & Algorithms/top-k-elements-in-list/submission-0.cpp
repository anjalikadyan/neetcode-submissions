class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> s;
        vector<int> ans;
        for (int i : nums) {
            s[i]++;
        }

        for (int i = 0; i < k; i++) {
            int m = INT_MIN;
            int e = -1;
            for (auto x : s) {
                if (x.second > m) {
                    m = x.second;
                    e = x.first;
                }
            }
            ans.push_back(e);
            s.erase(e);
        }
        return ans;
    }
};
