class Solution {
public:
    int binary(vector<int> arr,int t,int l,int h){
        int mid=(l+h)/2;
        if(l>h){
            return -1;
        }
        if(arr[mid]==t){
            return mid;
        }
        if(arr[mid]>t){
            return binary(arr,t,l,mid-1);
        }
        return binary(arr,t,mid+1,h);
    }

    int search(vector<int>& nums, int target) {
        return binary(nums,target,0,nums.size()-1);
    }
};
