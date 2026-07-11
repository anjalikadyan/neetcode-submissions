class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> arr;
        sort(nums.begin(),nums.end());
        // vector<vector<int>> arr1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                for (int z = j+1; z < nums.size(); z++) {
                    if(i<j && j<z && i<z){
                        if((nums[i]+nums[j]+nums[z])==0){
                            arr.insert({nums[i],nums[j],nums[z]});
                            // arr1.push_back({i,j,z});
                        }
                    }
                }
            }
        }
        return vector<vector<int>>(arr.begin(),arr.end());
    }
};
