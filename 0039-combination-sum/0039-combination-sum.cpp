class Solution {
public:

    void combSum(vector<int>& arr, int i, int target,
                 vector<int>& combin, vector<vector<int>>& ans) {

   
        if (target == 0) {
            ans.push_back(combin);
            return;
        }

        if (i == arr.size() || target < 0) {
            return;
        }

       
        combin.push_back(arr[i]);

        combSum(arr, i, target - arr[i], combin, ans);

  
        combin.pop_back();

       
        combSum(arr, i + 1, target, combin, ans);
    }


    vector<vector<int>> combinationSum(vector<int>& arr, int target) {

        vector<int> combin;
        vector<vector<int>> ans;

        combSum(arr, 0, target, combin, ans);

        return ans;
    }
};