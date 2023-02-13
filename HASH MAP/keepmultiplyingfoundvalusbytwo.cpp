class Solution {
public:
    int reverse(int num){
        int rev=0;
        while(num>0){
            rev=rev*10 + num%10;
            num=num/10;
        }
        return rev;
    };
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>set;
        for(auto i:nums){
            int ans=reverse(i);
            set.insert(i);
            set.insert(ans);
        }
        return set.size();
    }
};
