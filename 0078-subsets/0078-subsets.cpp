

class Solution {
public:
    void getallsubset(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
       
        if (i == nums.size()) {
            allSubsets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        getallsubset(nums, ans, i + 1, allSubsets);

        ans.pop_back();
        getallsubset(nums, ans, i + 1, allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        getallsubset(nums, ans, 0, allSubsets);
        return allSubsets;
    }
};
