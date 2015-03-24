#include "common.h"

class ImplementstrStr {
public:
	int strStr(char *haystack, char *needle) {
		if(!haystack || !needle)
			return -1;

		char *pH = haystack;
		int nSizeH = 0;
		while(*pH != '\0')
		{
			nSizeH++;
			pH++;
		}
		pH = haystack;

		char *pN = needle;
		int nSizeN = 0;
		while(*pN != '\0')
		{
			nSizeN++;
			pN++;
		}
		pN = needle;

		if(nSizeH < nSizeN)
			return -1;

		int nHIdx = 0;
		while (nHIdx <= nSizeH-nSizeN)
		{
			int nH = nHIdx;
			int nN = 0;
			while (nN < nSizeN)
			{
				if (*(pH+nH) == *(pN+nN))
				{
					nH++;
					nN++;
				}
				else
				{
					break;
				}
			}

			if(nN == nSizeN)
			{
				return nHIdx;
			}
			nHIdx++;
		}

		return -1;
	}
};