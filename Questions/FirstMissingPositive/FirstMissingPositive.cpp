#include "common.h"

class FirstMissingPositive {
public:
    int firstMissingPositive(vector<int>& nums) {
		if (nums.size() == 0)
		{
			return 1;
		}

		int n = nums.size();
		for (int i = 0; i < n; i++)
		{
			while (nums[i] > 0 && nums[i] <= n && nums[i] != i+1 && nums[nums[i]-1] != nums[i])
			{
				swap(nums[nums[i]-1], nums[i]);
			}
		}

		for (int i = 0; i < n; i++)
		{
			if (nums[i] != i+1)
			{
				return i+1;
			}
		}

		return n+1;
    }
};