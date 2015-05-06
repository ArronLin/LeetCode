#include "common.h"

class N_Queens {
public:
	typedef vector<string> VString;
	typedef vector<VString> VVString;
	typedef vector<int> VInt;
	
	bool _check(VInt &vBoard, int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if ((i-j == vBoard[i]-vBoard[j]) ||
					(i-j == vBoard[j]-vBoard[i]))
				{
					return false;
				}
			}
		}

		return true;
	}

	void _solveNQueens(VInt &vBoard, int n, int idx, VVString &vResult)
	{
		if (idx == n)
		{
			if (_check(vBoard, n))
			{
				VString vRet;
				for (int i = 0; i < n; i++)
				{
					string sLine;
					for (int j = 0; j < n; j++)
					{
						if (j == vBoard[i])
						{
							sLine += 'Q';
						}
						else
						{
							sLine += '.';
						}
					}
					vRet.push_back(sLine);
				}
				vResult.push_back(vRet);
			}
		}

		for (int i = idx; i < n; i++)
		{
			swap(vBoard[idx], vBoard[i]);
			_solveNQueens(vBoard, n, idx+1, vResult);
			swap(vBoard[idx], vBoard[i]);
		}
	}

	vector<vector<string> > solveNQueens(int n) {
		VVString vResult;
		if (n < 1)
		{
			return vResult;
		}

		VInt vBoard(n);
		for (int i = 0; i < n; i++)
		{
			vBoard[i] = i;
		}

		_solveNQueens(vBoard, n, 0, vResult);

		return vResult;
    }
};