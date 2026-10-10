class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
         long long low =0,high=n;
        while(low<=high){
        long long mid=(low+high)/2;
        long long coins=mid*(mid+1)/2;
        //while(low<=high){
             if(coins==n){
                 return mid;
             }
            else if(coins<n){
                 ans=mid;
                 low=mid+1;
             }
             else{
                high=mid-1;
             }
        }
        //}
       return ans;
    }
};
  