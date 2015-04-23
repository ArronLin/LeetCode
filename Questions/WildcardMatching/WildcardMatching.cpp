#include "common.h"

class WildcardMatching {
public:
    bool isMatch(string s, string p) {
        int len_s = s.length();
        int len_p = p.length();

		// If the number of non-* characters in p is greater than the 
		// number of characters in s, the p could not match s, just return false
		int idx = 0;
        int cnt = 0;
        while (idx < len_p) 
		{
			if (p.at(idx) != '*') 
				cnt++;
			idx++;
		}
        if (cnt > len_s) 
			return false;
        
        bool dp[500][500];
        memset(dp, 0,sizeof(dp));

        dp[0][0] = true;
        for (int i = 1; i <= len_p; i++) {
			// initialize the 0th row, very important
			// the 0-th row is used for evaluation of the 1-th row.
			// Imagine that when s is "", and p is "******", then the 0th row
			// should be all true to indicate that.
            if (dp[0][i-1] && p[i-1] == '*') 
				dp[0][i] = true;
            for (int j = 1; j <= len_s; ++j)
            {
                if (p[i-1] == '*') 
					dp[j][i] = (dp[j-1][i] || dp[j][i-1]);
                else if (p[i-1] == '?' || p[i-1] == s[j-1]) 
					dp[j][i] = dp[j-1][i-1];
                else 
					dp[j][i] = false;
            }
        }
        return dp[len_s][len_p];
    }
};