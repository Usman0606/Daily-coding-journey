class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=0;i<=n-1;i++){
            int sum=0;
            for(int j=i;j<=n-1;j++){
                sum=sum+arr[j];
              if((j-i+1)%2!=0){
                ans=ans+sum;
              }
            }
        
           
        }
        return ans;
        }
        
    };
    