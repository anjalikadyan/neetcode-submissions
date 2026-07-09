class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int sum=0;
        for(int i=0;i<numbers.size();i++){
            for(int j=0;j<numbers.size();j++){
                if(i<j){
                    if(numbers[i]+numbers[j]==target){
                        return {i+1,j+1};
                    }
                }
            }
        }
    }
};
