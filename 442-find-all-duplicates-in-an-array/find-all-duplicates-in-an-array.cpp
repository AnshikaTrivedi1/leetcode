class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;

        // Step 1: Cycle Sort - place numbers at correct indices
        while(i<n){
            int currIdx=nums[i]-1;
            if(i==currIdx || nums[i]==nums[currIdx]) i++;
            else swap(nums[i],nums[currIdx]);
        }

        // Step 2: Collect duplicates
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) ans.push_back(nums[i]);
        }
        return ans;
    }
};