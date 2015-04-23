#include "common.h"

class WildcardMatching {
public:
    bool isMatch(string s, string p) {
        if(p.size() == 0)
			return s.size() == 0;
        
		int nIdxP, nIdxS;
		nIdxP = nIdxS = 0;
		if(p[nIdxP] == '?')
		{
			if (s[nIdxS] != '\0')
			{
				return isMatch(s.substr(nIdxS+1), p.substr(nIdxP+1));
			}
			else
			{
				return false;
			}
		}	
		else if(p[nIdxP] == '*')
        {
			while(p[nIdxP] == '*')
				++nIdxP;
			if(p[nIdxP] == '\0')
                return true;
			while(s[nIdxS] != '\0')
            {
				if(isMatch(s.substr(nIdxS), p.substr(nIdxP)))
                    return true;
				nIdxS++;
            }
			if(s[nIdxS] == '\0')
                return false;
        }
        else
        {
			return (p[nIdxP] == s[nIdxS]) && isMatch(s.substr(nIdxS+1), p.substr(nIdxP+1));
        }
    }
};