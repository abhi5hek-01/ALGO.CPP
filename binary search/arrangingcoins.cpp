class Solution {
public:
    int arrangeCoins(int n) {
         long low=0,high=n;
        long mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(n>=(mid*(mid+1)/2)){
                low=mid+1;
            }

            else{
                high=mid-1;
            }
        }
        return low-1;
    }
};
