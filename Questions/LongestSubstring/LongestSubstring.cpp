#include "common.h"

class LongestSubstring {
public:
    int lengthOfLongestSubstring(string s) {
        int nSize = s.size();
        if(nSize == 0 || nSize == 1)
            return nSize;
            
        int hashTable[256] = {0};
        int nSlowIndex, nQuickIndex;
        nSlowIndex = 0;
		nQuickIndex = 1;
        int nMaxSubLen = 0;
        
		while(nQuickIndex < nSize && nSize-nSlowIndex > nMaxSubLen)
        {
            if(hashTable[s[nQuickIndex]] == 0)
            {
                hashTable[s[nQuickIndex]] = 1;
                nQuickIndex++;
            }
            else
            {
                if(nQuickIndex-nSlowIndex > nMaxSubLen)
                    nMaxSubLen = nQuickIndex-nSlowIndex;
                
                while(s[nSlowIndex] != s[nQuickIndex])
                {
                    hashTable[s[nSlowIndex++]] = 0;
                }
                
                nSlowIndex++;
                nQuickIndex++;
            }
        }
        
        if(nSize - nSlowIndex > nMaxSubLen)
            nMaxSubLen = nSize - nSlowIndex;
            
        return nMaxSubLen;
    }
};