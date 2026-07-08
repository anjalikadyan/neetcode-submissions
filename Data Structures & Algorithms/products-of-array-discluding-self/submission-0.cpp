class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum=1;
        vector<int> s;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    sum*=nums[j];
                }
            }
            s.push_back(sum);
            sum=1;
        }
        return s;
    }
};
