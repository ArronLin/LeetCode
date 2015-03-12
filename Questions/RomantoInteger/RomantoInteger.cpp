#include "common.h"

class RomantoInteger {
public:
	int c2i(char c)
	{
		switch (c)
		{
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		default:
			return 0;
		}
	}

    int romanToInt(string s) {
        int nLen = s.size();
		if(nLen == 0)
			return 0;

		int nRet = 0;
		int nLast = c2i(s[0]);
		int nSub = nLast;
		for(int i = 1; i < nLen; ++i)
		{
			int nCur = c2i(s[i]);
			if(nCur == nLast)
			{
				nSub += nCur;
			}
			else if(nCur > nLast)
			{
				nSub = nCur-nSub;
			}
			else // nCur < nLast
			{
				nRet += nSub;
				nSub = nCur;
			}
			nLast = nCur;
		}

		nRet += nSub;

		return nRet;
    }
};