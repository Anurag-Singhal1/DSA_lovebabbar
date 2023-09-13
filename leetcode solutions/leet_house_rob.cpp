class Solution {
public:
    int Robber(vector<int>& nums, int i){
        if(i>=nums.size()){
            return 0;
        }
        // include
        int rob1 = nums[i] + Robber(nums,i+2);
        // exclude
        int rob2 = Robber(nums,i+1);
        return max(rob1,rob2);
    }
    int rob(vector<int>& nums) {
        int ans = Robber(nums,0);
        return ans;
    }
};