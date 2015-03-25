#include "common.h"

class DivideTwoIntegers {
public:
	int divide(int dividend, int divisor) {
		if(dividend == 0 || divisor == 0)
			return 0;

		long long lDividend = dividend;
		lDividend = lDividend > 0? lDividend : 0-lDividend;
		long long lDivisor = divisor;
		lDivisor = lDivisor > 0? lDivisor : 0-lDivisor;
		if(lDivisor == 1 || lDivisor == -1)
			return lDivisor == 1? dividend : lDividend > INT_MAX? INT_MAX : 0-dividend;
		
		bool bIsNegative = (dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0);
		int nCount = 0;
		int nIdx = 1;
		unsigned long lDivisor_idx = lDivisor;
		while (lDividend >= lDivisor)
		{
			if (lDividend >= lDivisor_idx)
			{
				lDividend -= lDivisor_idx;
				nCount += nIdx;
				nIdx = nIdx << 1;
				lDivisor_idx = lDivisor_idx << 1;
			}
			else
			{
				lDivisor_idx = lDivisor;
				nIdx = 1;
			}
		}

		return bIsNegative? -nCount : nCount;
	}
};