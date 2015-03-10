#include "common.h"

class StringtoInteger {
public:
	bool isValidChar(char c)
	{
		if(c >= '0' && c <= '9')
			return true;
		else
			return false;
	}

    int atoi(string str) {
        int nLen = str.size();
		if(nLen == 0)
			return 0;

		int nIndex = 0;
		bool bIsNegative = false;
		while(nIndex < nLen && str[nIndex] == ' ')
			nIndex++;
		if(nIndex == nLen)
			return 0;
		else if(str[nIndex] == '-' || str[nIndex] == '+')
		{
			if(str[nIndex] == '-')
				bIsNegative = true;
			nIndex++;
		}
		
		int nRet = 0;
		bool bIsLeadingZeros = true;
		for(; nIndex < nLen; ++nIndex)
		{
			if(str[nIndex] == '0' && bIsLeadingZeros == true)
			{
				continue;
			}
			else if(!isValidChar(str[nIndex]))
			{
				if(bIsLeadingZeros == true)
				{
					return 0;
				}
				else
				{
					return bIsNegative? -nRet : nRet;
				}
			}
			else if(isValidChar(str[nIndex]))
			{
				bIsLeadingZeros = false;
				int nNum = str[nIndex]-'0';
				if((nRet == INT_MAX/10 && nNum > 7) || (nRet > INT_MAX/10))
				{
					return bIsNegative? INT_MIN : INT_MAX;
				}
				else
				{
					nRet *= 10;
					nRet += nNum;
				}
			}
		}

		return bIsNegative? -nRet : nRet;
    }
};