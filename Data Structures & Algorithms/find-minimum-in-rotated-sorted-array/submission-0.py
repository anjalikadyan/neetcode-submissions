class Solution:
    def findMin(self, nums: List[int]) -> int:
        a=nums[0]
        for i in nums:
            if i<a:
                a=i
        return a