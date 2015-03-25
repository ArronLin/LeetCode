#include "common.h"

class NextPermutation {
public:
	void swap(int &a, int &b)
	{
		int temp = a;
		a = b; 
		b = temp;
	}

	void reverse(vector<int> &num, int nLeftIdx, int nRightIdx)
	{
		while (nLeftIdx < nRightIdx)
		{
			swap(num[nLeftIdx++], num[nRightIdx--]);
		}
	}

    void nextPermutation(vector<int> &num) {
		if (num.size() <= 1)
		{
			return;
		}

		int nSize = num.size();
		int nRightIdx = nSize-1;
		int nLeftIdx = nRightIdx-1;

		while (nLeftIdx >= 0)
		{
			if (num[nLeftIdx] < num[nLeftIdx+1])
			{
				break;
			}
			else
			{
				nLeftIdx--;
			}
		}

		if (nLeftIdx >= 0)
		{
			while (nRightIdx > nLeftIdx)
			{
				if (num[nRightIdx] > num[nLeftIdx])
				{
					swap(num[nRightIdx], num[nLeftIdx]);
					reverse(num, nLeftIdx+1, nSize-1);
					break;
				}
				else
				{
					nRightIdx--;
				}
			}
		}
		else
		{
			reverse(num, 0, nSize-1);
		}
    }
};