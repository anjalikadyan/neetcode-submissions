class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> s;
        vector<vector<string>> ans;
        for(string a:strs){
            string b=a;
            sort(a.begin(),a.end());
            s[a].push_back(b);
        }
        for(auto x:s){
            ans.push_back(x.second);
        }
        return ans;
    }
};
