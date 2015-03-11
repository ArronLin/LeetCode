#include "common.h"

class IntegertoRoman {
public:
	void appendNumToRomanStr(int nNum, string& romanStr, char symbols[])
	{
		if(nNum <= 3)
		{
			romanStr.append(nNum, symbols[0]);
		}
		else if(nNum == 4)
		{
			romanStr.append(1, symbols[0]);
			romanStr.append(1, symbols[1]);
		}
		else if(nNum <= 8)
		{
			romanStr.append(1, symbols[1]);
			romanStr.append(nNum-5, symbols[0]);
		}
		else if (nNum == 9)
		{
			romanStr.append(1, symbols[0]);
			romanStr.append(1, symbols[2]);
		}
	}

    string intToRoman(int num) {
		string romanStr = "";
		if(num == 0)
			return romanStr;

		char symbols[] = {'I'/*1*/,'V'/*5*/,'X'/*10*/, 'L'/*50*/,'C'/*100*/, 'D'/*500*/,'M'/*1000*/};
		int nDiv = 1000;
		for(int i = 6; i >= 0; i = i-2)
		{
			int nVal = num/nDiv;
			appendNumToRomanStr(nVal, romanStr, symbols+i);
			num = num%nDiv;
			nDiv /= 10;
		}

		return romanStr;
    }
};