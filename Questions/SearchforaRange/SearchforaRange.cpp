#include "common.h"

class SearchforaRange {
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

		return -1;
	}

	int _searchRange(int A[], int nLeftIdx, int nRightIdx, int target, bool bSearchLeftRange)
	{
		int nFound = binary_search(A, nLeftIdx, nRightIdx, target);
		while (nFound != -1)
		{
			if (bSearchLeftRange)
			{
				if (nFound == nLeftIdx || A[nFound-1] != target)
				{
					return nFound;
				}
				else
				{
					nFound = binary_search(A, nLeftIdx, nFound-1, target);
				}
			}
			else
			{
				if (nFound == nRightIdx || A[nFound+1] != target)
				{
					return nFound;
				}
				else
				{
					nFound = binary_search(A, nFound+1, nRightIdx, target);
				}

			}
		}

		return nFound;
	}

	vector<int> searchRange(int A[], int n, int target) {
		vector<int> vRet;
		if (!A || n <= 0)
		{
			return vRet;
		}

		int nLeftIdx = _searchRange(A, 0, n-1, target, true);
		int nRightIdx = _searchRange(A, 0, n-1, target, false);

		vRet.push_back(nLeftIdx); vRet.push_back(nRightIdx);

		return vRet;
	}
};