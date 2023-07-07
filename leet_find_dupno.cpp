// LEETCODE SOLUTION.....

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //  SORTING AND FINDING ADJACENT DUPLICate.
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return -1;


        // NEGATIVE INDEX MARKING METHOD.....visited solution
        int ans=-1;
        for(int i=0;i<nums.size();i++){

            int index = abs(nums[i]);    // absolute value : -3 ka +3

            // already visited.........
            if(nums[index]<0){
                ans=index;
                break;
            }
            // to mark visited
            nums[index]*=-1;
        }
        return ans;
        


         // POSITIONING METHOD......
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    
    }
};