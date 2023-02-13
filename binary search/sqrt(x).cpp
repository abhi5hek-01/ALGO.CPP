class Solution {
public:
    int mySqrt(int x) {
        long low=0,high=long(x);
        long mid;
        if (x==1){
            return 1;
        }
        while((high-low)>1){
            mid=low+(high-low)/2;
            long int sqr=(mid*mid);
            if(sqr>x){
                high=mid;
            }
            else{
                low=mid;
            }
        }
            return (int)low;
        }
};
