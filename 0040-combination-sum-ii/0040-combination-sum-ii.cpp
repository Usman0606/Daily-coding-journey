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
        for(int j=i;j<arr.size();j++){
            if(j>i && arr[j]==arr[j-1]){
                continue;
            }
            if(arr[j]>target){
                break;
            }
        


       
        combin.push_back(arr[j]);

        combSum(arr, j+1, target - arr[j], combin, ans);

  
        combin.pop_back();

   
    }
                 }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {

           sort(arr.begin(),arr.end());
        vector<int> combin;
        vector<vector<int>> ans;

        combSum(arr, 0, target, combin, ans);

        return ans;
    }
};