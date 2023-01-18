class Solution {

    unordered_map<int, int> hash;

public:

    int numIdenticalPairs(vector<int>& nums) {

        int count = 0;

        for (int i = 0; i < nums.size(); ++i) {

            hash[nums[i]]++;

        }

        for (auto &h : hash) {

			// Sum of (n - 1) series  n * (n - 1)/2            count += ((h.second) * (h.second - 1))/2;
        }

        return count;

    }

};
