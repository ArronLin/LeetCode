#include "common.h"

class MaximumSubarray {
public:
    int maxSubArray(vector<int>& nums) {
        int nMax = 0;
		int nSize = nums.size();
		if (nSize == 0)
		{
			return nMax;
		}

		nMax = nums[0];
		int nSum = nums[0];
		for (int i = 1; i < nSize; i++)
		{
			if (nSum < 0)
			{
				nSum = nums[i];
			}
			else
			{
				nSum += nums[i];
			}

			if (nSum > nMax)
			{
				nMax = nSum;
			}
		}

		return nMax;
    }
};