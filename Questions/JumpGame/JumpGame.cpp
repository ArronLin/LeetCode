#include "common.h"

class JumpGame {
public:
	bool canJump(vector<int>& nums) {

		// DP version
		// 
		vector<int> vSteps(n, 0);

		for(int i = 1; i < n; ++i)
		{
			vSteps[i] = max(vSteps[i-1], A[i-1]) - 1;
			if(vSteps[i] < 0)
				return false;
		}

		return vSteps[n-1] >= 0;
	}
};