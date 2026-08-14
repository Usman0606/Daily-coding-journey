class Solution {
    int lowerBound(vector<int> &nums, int target){
        int s=0, e=nums.size()-1, ans=-1;
        while(s <= e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid] < target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
      int upperBound(vector<int> &nums, int target){
        int s=0, e=nums.size()-1, ans=-1;
        while(s <= e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                s = mid + 1;
            }
            else if(nums[mid] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> v;
       int lower = lowerBound(nums, target);
       int upper = upperBound(nums, target);
       v.push_back(lower);
       v.push_back(upper);
       return v;

    }
};