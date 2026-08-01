class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
            int n=stones.size();
        while(n>1){
            
            sort(stones.begin(),stones.end());
            if(stones[n-1]==stones[n-2]){
                stones.erase(stones.begin()+(n-1));
                stones.erase(stones.begin()+(n-2));
            }
            else{
                stones[n-2]=stones[n-1]-stones[n-2];
                stones.erase(stones.begin()+(n-1));
            }
            n=stones.size();
        }
        return stones.empty()?0:stones[0];
    }
};