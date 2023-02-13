class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        int firstindex=firstoccurence(nums,target);
        int lastindex=lastoccurence(nums,target);
        result.push_back(firstindex);
        result.push_back(lastindex);
        return result;
    }
    int firstoccurence(vector<int>nums,int target){
        int low=0,high=nums.size()-1;
        int mid;
        int ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    int lastoccurence(vector<int>nums,int target){
         int low=0,high=nums.size()-1;
        int mid;
        int ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    
    }
};
