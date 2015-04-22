#include "common.h"

class MultiplyStrings {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")
            return "0";
                
        int nSize1 = num1.size();
        int nSize2 = num2.size();
        int nLen = nSize1+nSize2+1;
        int* pResult = new int[nLen];
        memset(pResult, 0, sizeof(int)*nLen);
            
        for(int idx1 = 0; idx1 < nSize1; ++idx1)
        {
            for(int idx2 = 0; idx2 < nSize2; ++idx2)
            {
                pResult[(nSize1-idx1-1) + (nSize2-idx2-1)] += (num1[idx1]-'0')*(num2[idx2]-'0');
            }
        }
            
        int nCarry = 0;
        for(int idx = 0; idx < nLen; ++idx)
        {
            pResult[idx] += nCarry;
            if(pResult[idx] >= 10)
            {
                nCarry = pResult[idx]/10;
                pResult[idx] %= 10;
            }
    		else
    		{
    			nCarry = 0;
    		}
        }
            
        string sResult = "";
        bool bLeadingZero = true;
        for(int idx = nLen-1; idx >= 0; --idx)
        {
            if(bLeadingZero && pResult[idx] == 0)
                continue;
            else
            {
                bLeadingZero = false;
                sResult += ('0'+pResult[idx]);
            }
        }
            
        return sResult;
    }
};