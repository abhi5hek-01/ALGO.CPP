class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n=(int)nums.size();
       long low=0,high=n-1;
       long mid;
       while(low<=high){
           mid=low+(high-low)/2;
           if(nums[mid]==target){
               return mid;
           }
           else if(nums[mid]<target){
               low=mid+1;
           }
           else{
               high=mid-1;
           }
       }

       return -1; 
    }
};
