class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int count =0;
    int j=0;
    int n=nums.size();
       for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
       }
     n=j;
     for(int i=0;i<n;i++){
        count =count+1;
     }
     return j;
}
};