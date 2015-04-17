#include "common.h"

class CountandSay {
public:
    string countAndSay(int n) {
        string sRet;
		if(n <= 0)
			return sRet;

		int nIdx = 0;
		string vStrings[2];
		vStrings[nIdx] = "1";

		for (int i = 2; i <= n; i++)
		{
			int nSlowIdx = 0;
			int nQuickIdx = 0;
			while (nQuickIdx <= vStrings[nIdx].length())
			{
				if (nQuickIdx == vStrings[nIdx].length() || vStrings[nIdx][nSlowIdx] != vStrings[nIdx][nQuickIdx])
				{
					vStrings[1-nIdx] += ('0'+nQuickIdx-nSlowIdx);
					vStrings[1-nIdx] += (vStrings[nIdx][nSlowIdx]);

					nSlowIdx = nQuickIdx;
				}
				nQuickIdx++;
			}

			vStrings[nIdx] = "";

			nIdx = 1- nIdx;
		}
		sRet = vStrings[nIdx];

		return sRet;
    }
};