#include "common.h"

class RemoveDuplicatesfromSortedArray {
public:
    int removeDuplicates(int A[], int n) {
        if(!A || n <= 1)
			return n < 0? 0 : n;

		int nRearIdx, nFrontIdx;
		nRearIdx = 0; nFrontIdx = 1;
		while(nFrontIdx < n)
		{
			if(A[nFrontIdx-1] != A[nFrontIdx])
			{
				A[nRearIdx++] = A[nFrontIdx-1];
			}
			else
			{
				nFrontIdx++;
			}
		}

		return nRearIdx;
    }
};