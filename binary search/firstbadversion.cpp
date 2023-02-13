class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n;
        int ans=-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(isBadVersion(mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};
