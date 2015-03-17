#include "common.h"

class ThreeSumCloset {
public:
    int threeSumClosest(vector<int> &num, int target) {
		int nSize = num.size();
		if(nSize < 3)
			return 0;

		sort(num.begin(), num.end());
		int nRet = num[0]+num[1]+num[2];
		int nMinGap = INT_MAX;
		for(int i = 0; i < nSize-2; ++i)
		{
			int j, k;
			for(j = i+1, k = nSize-1; j < k;)
			{
				int nTemp = num[i]+num[j]+num[k];
				int nCurGap = nTemp-target;
				if(nCurGap == 0)
					return target;

				if(abs(nCurGap) < nMinGap)
				{
					nMinGap = abs(nCurGap);
					nRet = nTemp;
				}

				if(nCurGap < 0)
				{
					++j;
				}
				else
				{
					--k;
				}
			}
		}

		return nRet;
    }
};