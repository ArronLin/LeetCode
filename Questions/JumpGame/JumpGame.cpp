#include "common.h"

class JumpGame {
public:
    bool canJump(vector<int> &A) {
        // Greedy version
		// For each step, try to go to the furthest location
		// pay attention to the phase "if (i <= furthestJump)", this ensures the jumps are contineous, not interrupted
		int n = A.size();
		int furthestJump = 0;
		for (int i = 0; i < n; i++)
		{
			if (i <= furthestJump)
			{
				furthestJump = max(furthestJump, i+A[i]);
			}
		}

		return furthestJump >= n-1;
    }
};