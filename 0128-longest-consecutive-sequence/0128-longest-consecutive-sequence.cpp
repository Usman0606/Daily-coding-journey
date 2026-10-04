class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==0) return 0;

        sort(nums.begin(),nums.end());
        vector<int>a;
        a.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=a.back()){
                a.push_back(nums[i]);
            }
        }
        int count=1;
        int longest=1;
        for(int j=1;j<a.size();j++){
            if(a[j]==a[j-1]+1){
                count++;
            }
            else{
                count=1;
            }
        
        longest=max(longest,count);
        }
    
         
         return longest;
    }
    
};