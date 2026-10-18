class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>ans;
        //int i=0;
       // int j=0;
        for(int i=0;i<m;i++){
            for( int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    break;
                }
            
            }
        }
        vector<int>result;
        for(int i=0;i<ans.size();i++){
            bool duplicate=false;
        
        for(int j=0;j<result.size();j++){
            if(ans[i]==result[j]){
                duplicate=true;
                break;
            }
        }
        
            if(!duplicate){
                result.push_back(ans[i]);
            }
        }
        
        
        return result;
    }
};