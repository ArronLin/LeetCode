#include "common.h"

class JumpGameII {
public:
    int jump(vector<int>& nums) {
		// DP version
		// 
		int n = nums.size();
		vector<int> steps(n, 0);
		for (int i = 0; i < n-1; i++)
		{
			int m = nums[i];
			if (i+m >= n-1)
			{
				return steps[i]+1;
			}
			for (int j = 1; j <= m && i+j < n; j++)
			{
				steps[i+j] = steps[i+j] == 0? steps[i]+1 :  min(steps[i+j], steps[i]+1);
			}
		}

		return steps[n-1];
    }
};