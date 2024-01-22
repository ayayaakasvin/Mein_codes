#include <vector>
#include <iostream>
#include <numeric>

class Solution {
public:
    std::vector<int> findErrorNums(std::vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                if (i == 0  && nums[i] != 1)
                {
                    return {nums[i], nums[i] - 1};
                }
                else
                {
                    return {nums[i], nums[i] + 1};
                }
            }
        }
        return {};
    }
};