#include "common.h"

class MaximumSubarray {
public:
	int divide(vector<int> &nums, int nLeft, int nRight)
	{
		if (nLeft == nRight)
		{
			return nums[nLeft];
		}

		int nMid = (nLeft+nRight+1)/2;
		if (nMid == nLeft || nMid == nRight)
		{
			return max(nums[nLeft]+nums[nRight], max(nums[nLeft], nums[nRight]));
		}

		int nLeftMax = divide(nums, nLeft, nMid-1);
		int nRightMax = divide(nums, nMid+1, nRight);

		int nTemp = nums[nMid];
		int nMax = nTemp;
		for (int i = nMid-1; i >= nLeft; i--)
		{
			nTemp += nums[i];
			nMax = nTemp > nMax? nTemp : nMax;
		}

		nTemp = nMax;
		for (int i = nMid+1; i <= nRight; i++)
		{
			nTemp += nums[i];
			nMax = nTemp > nMax? nTemp : nMax;
		}

		return max(nMax, max(nLeftMax, nRightMax));
	}

    int maxSubArray(vector<int>& nums) {
		int nSize = nums.size();
		if (nSize == 0)
		{
			return 0;
		}

		return divide(nums, 0, nSize-1);
    }
};