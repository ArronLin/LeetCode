#include "common.h"

class N_Queens_II {
public:
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

	void _solveNQueens(VInt &vBoard, int n, int idx, int &nTotal)
	{
		if (idx == n)
		{
			if (_check(vBoard, n))
			{
			    nTotal++;
			}
			return;
		}

		for (int i = idx; i < n; i++)
		{
			swap(vBoard[idx], vBoard[i]);
			_solveNQueens(vBoard, n, idx+1, nTotal);
			swap(vBoard[idx], vBoard[i]);
		}
	}

    int totalNQueens(int n) {
        int nTotal = 0;

		if (n < 1)
		{
			return nTotal;
		}
		
		VInt vBoard(n);
		for (int i = 0; i < n; i++)
		{
			vBoard[i] = i;
		}
        
        _solveNQueens(vBoard, n, 0, nTotal);
        
        return nTotal;
    }
};