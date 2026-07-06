class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=size(nums);
        vector<int> arr={-1,-1};
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    sum=nums[i]+nums[j];
                    if(sum==target){
                        arr[0]=i;
                        arr[1]=j;
                        return arr;
                    }
                }
                sum=0;
            }
        }
        return arr;
    }
};
