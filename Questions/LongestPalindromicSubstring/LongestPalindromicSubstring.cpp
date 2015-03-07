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
};