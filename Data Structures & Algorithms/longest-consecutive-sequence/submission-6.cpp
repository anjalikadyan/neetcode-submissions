class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        std::sort(nums.begin(),nums.end());
        int count=1;
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            ans=max(ans,count);
            if(nums[i]==nums[i+1]){
                // count+=1;
                continue;
            }
            else if(nums[i]!=(nums[i+1]-1)){
                count=1;
                continue;
            }
            count+=1;
            std::cout<<count<<" ";
            ans=max(ans,count);
        }
        return ans;
    }
};
