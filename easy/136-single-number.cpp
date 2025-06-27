class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() <= 0)
            return -1;

        int single = 0;

        for (int num : nums)
            single ^= num;

        return single;
    }
};