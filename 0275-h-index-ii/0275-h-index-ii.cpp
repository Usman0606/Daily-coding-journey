class Solution {
public:
    int hIndex(vector<int>& citations) {
        int low=0;
        int n=citations.size();
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int h=n-mid;
            if(citations[mid]>=h){
                high=mid-1;
            }
            else{
            low=mid+1;
            }
        }
        return n-low;
    }
};