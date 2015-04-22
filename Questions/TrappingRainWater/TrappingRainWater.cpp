#include "common.h"

class TrappingRainWater {
public:
    int trap(vector<int>& height) {
		if (height.size() == 0)
		{
			return 0;
		}

		int maxBarIdx = 0;
		for (int i = 1; i < height.size(); i++)
		{
			if (height[i] > height[maxBarIdx])
			{
				maxBarIdx = i;
			}
		}

		int water = 0;
		
		int leftMaxBarIdx = 0;
		for (int i = 1; i < maxBarIdx; i++)
		{
			if (height[i] > height[leftMaxBarIdx])
			{
				leftMaxBarIdx = i;
			}
			else
			{
				water += height[leftMaxBarIdx]-height[i];
			}
		}

		int rightMaxBarIdx = height.size()-1;
		for (int i = height.size()-2; i > maxBarIdx; i--)
		{
			if (height[i] > height[rightMaxBarIdx])
			{
				rightMaxBarIdx = i;
			}
			else
			{
				water += height[rightMaxBarIdx]-height[i];
			}
		}

		return water;
    }
};