class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 3; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int x = nums[i];
            for (int j = i + 1; j < n - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int y = nums[j];
                int l = j + 1, r = n - 1;
                while (l < r) {
                    long long sum = (long long)x + y + nums[l] + nums[r];
                    if (sum < target) ++l;
                    else if (sum > target) --r;
                    else {
                        res.push_back({x, y, nums[l], nums[r]});
                        ++l; --r;
                        while (l < r && nums[l] == nums[l - 1]) ++l;
                    }
                }
            }
        }
        return res;
    }
};