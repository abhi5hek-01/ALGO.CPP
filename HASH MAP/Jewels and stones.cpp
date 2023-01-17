class Solution {

public:

    int numJewelsInStones(string jewels, string stones) {

        unordered_map<int,int> count;

        int m=jewels.size();

        int n=stones.size();

        int ans=0;

        for(int i=0;i<n;i++){

            count[stones[i]]+=1;            

        }

        for(int i=0;i<m;i++){

            ans+=count[jewels[i]];

        }

        return ans;

    }

};
