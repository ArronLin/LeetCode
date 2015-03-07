#include "common.h"

class LongestPalindromicSubstring {
public:
    string longestPalindromeDP(string s) {
        int nLen = s.size();
		if(!nLen)
			return 0;

		bool bIsPalindrome[1000][1000] = {false};
		int nMaxLen = 1;
		int nLeftIdx = 0;
		for(int i = 0; i < 1000; ++i)
		{
			bIsPalindrome[i][i] = true;
			if(i+1 < nLen && s[i] == s[i+1])
			{
				bIsPalindrome[i][i+1] = true;
				nMaxLen = 2;
				nLeftIdx = i;
			}
		}

		for(int nPalindromicLen = 3; nPalindromicLen <= nLen; ++nPalindromicLen)
		{
			for(int i = 0; i <= nLen-nPalindromicLen; ++i)
			{
				int j = i+nPalindromicLen-1;
				if(s[i] == s[j] && bIsPalindrome[i+1][j-1])
				{
					bIsPalindrome[i][j] = true;
					nLeftIdx = i;
					nMaxLen = nPalindromicLen;
				}
			}
		}

		return s.substr(nLeftIdx, nMaxLen);
    }

	string longestPalindrome(string s)
	{
		int nLen = s.size();
		if(nLen == 0)
			return 0;

		int nMaxLen = 1;
		int nLeftIdx = 0;

		// Odd scenario
		for(int i = 0; i < nLen; ++i)
		{
			int j = 1;
			for(; i-j >= 0 && i+j < nLen; ++j)
			{
				if(s[i-j] != s[i+j])
				{
					break;
				}
			}

			j--;
			if(2*j+1 > nMaxLen)
			{
				nMaxLen = 2*j+1;
				nLeftIdx = i-j;
			}
		}

		// Even Scenario 
		for(int i = 0; i < nLen; ++i)
		{
			int j = 1;
			for(; i-j+1 >= 0 && i+j < nLen; ++j)
			{
				if(s[i-j+1] != s[i+j])
				{
					break;
				}
			}

			j--;
			if(2*j > nMaxLen)
			{
				nMaxLen = 2*j;
				nLeftIdx = i-j+1;
			}
		}

		return s.substr(nLeftIdx, nMaxLen);
	}
};