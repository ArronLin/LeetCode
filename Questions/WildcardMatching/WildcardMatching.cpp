#include "common.h"

class WildcardMatching {
public:
    bool isMatch(string s, string p) {
		if (s.size() == 0 && p.size() == 0)
		{
			return true;
		}

		if (p.size() == 0)
		{
			return false;
		}

		int idxS, idxP;
		idxS = idxP = 0;
		if (p[idxP] != '?' && p[idxP] != '*')
		{
			if (s[idxS] == 0 || s[idxS] != p[idxP])
			{
				return false;
			}
			else
			{
				return isMatch(s.substr(idxS+1), p.substr(idxP+1));
			}
		}
		else
		{
			if (p[idxP] == '?')
			{
				if (s[idxS] == 0)
				{
					return false;
				}
				else
				{
					return isMatch(s.substr(idxS+1), p.substr(idxP+1));
				}
			}
			else
			{
				while(!isMatch(s.substr(idxS), p.substr(idxP+1)))
				{
					idxS++;
				}
			}
		}
    }
};