#include "common.h"

class SearchInsertPosition {
public:
	int binary_search(int A[], int nLeftIdx, int nRightIdx, int target)
	{
		while (nLeftIdx <= nRightIdx)
		{
			int nMidIdx = (nLeftIdx+nRightIdx+1)/2;
			if (target == A[nMidIdx])
			{
				return nMidIdx;
			}
			else if (target > A[nMidIdx])
			{
				nLeftIdx = nMidIdx+1;
			}
			else
			{
				nRightIdx = nMidIdx-1;
			}
		}

		return nLeftIdx;
	}

	int searchInsert(int A[], int n, int target) {
		if (!A || n <= 0)
		{
			return -1;
		}

		return binary_search(A, 0, n-1, target);
	}
};