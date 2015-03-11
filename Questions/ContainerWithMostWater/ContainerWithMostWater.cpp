#include "common.h"

class ContainerWithMostWater {
public:
	int min(int a, int b)
	{
		return a < b? a : b;
	}

    int maxArea(vector<int> &height) {
		if(height.size() == 0)
			return 0;

		int nMaxArea = 0;
		int nFrontIdx = 0;
		int nEndIdx = height.size()-1;

		while(nFrontIdx < nEndIdx)
		{
			int nArea = min(height[nFrontIdx], height[nEndIdx]) * (nEndIdx-nFrontIdx);
			if(nArea > nMaxArea)
				nMaxArea = nArea;

			if(height[nFrontIdx] < height[nEndIdx])
				nFrontIdx++;
			else
				nEndIdx--;
		}

		return nMaxArea;
    }
};