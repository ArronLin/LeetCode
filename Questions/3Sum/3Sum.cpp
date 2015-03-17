#include "common.h"

class ThreeSum {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        vector<vector<int>> vRet;
		if(num.size() < 3)
			return vRet;

		sort(num.begin(), num.end());
		for(int i = 0; i < num.size()-2; ++i)
		{
			if(i > 0 && num[i] == num[i-1])
			{
				continue;
			}
			int j, k;
			for(j = i+1, k = num.size()-1; j < k;)
			{
				int nTemp = num[i]+num[j]+num[k];
				if(nTemp > 0)
				{
					do
					{
						--k;
					}while(k >= 0 && num[k] == num[k+1]);
				}
				else if (nTemp < 0)
				{
					do
					{
						++j;
					}while(j < num.size()-1 && num[j] == num[j-1]);
				}
				else
				{
					vector<int> triple;
					triple.push_back(num[i]);
					triple.push_back(num[j]);
					triple.push_back(num[k]);
					vRet.push_back(triple);

					do
					{
						--k;
					}while(k >= 0 && num[k] == num[k+1]);

					do
					{
						++j;
					}while(j < num.size()-1 && num[j] == num[j-1]);

				}
			}
		}

		return vRet;
    }
};