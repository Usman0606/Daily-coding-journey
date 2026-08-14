class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int st=0;
         int end=arr.size()-1;
         while(st<=end){
           int mid=(st+end)/2;
            if(arr[mid]<arr[mid+1]){
                st=mid+1;
            }
            else if(arr[mid-1]>arr[mid]){
                end=mid-1;
            }
            else if(arr[mid]>arr[mid+1]){
                return mid;
            }
         }
         return -1;
    }
};