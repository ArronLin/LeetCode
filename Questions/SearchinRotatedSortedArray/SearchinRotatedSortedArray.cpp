#include "common.h"

class SearchinRotatedSortedArray {
public:
	int search(int A[], int n, int target) {
		if (!A || n <= 0)
		{
			return -1;
		}

		int nLeftIdx, nRightIdx;
		nLeftIdx = 0; nRightIdx = n-1;

		while (nLeftIdx <= nRightIdx)
		{
			int nMidIdx = (nLeftIdx+nRightIdx+1)/2;
			if (A[nMidIdx] == target)
			{
				return nMidIdx;
			}
			if (A[nMidIdx] > A[nLeftIdx])
			{
				if (target >= A[nLeftIdx] && target <= A[nMidIdx])
				{
					nRightIdx = nMidIdx-1;
				}
				else
				{
					nLeftIdx = nMidIdx+1;
				}
			}
			else
			{
				if (target >= A[nMidIdx] && target <= A[nRightIdx])
				{
					nLeftIdx = nMidIdx+1;
				}
				else
				{
					nRightIdx = nMidIdx-1;
				}
			}
		}

		return -1;
	}
};