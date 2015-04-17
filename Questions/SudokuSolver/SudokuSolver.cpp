#include "common.h"

class SudokuSolver {
public:
	struct Position
	{
		int row;
		int col;
	};

	bool isValidSudoku(vector<vector<char>> &board, Position &pos)
	{
		// Check for row
		for (int i = 0; i < 9; i++)
		{
			if (i != pos.col && board[pos.row][i] != '.' && board[pos.row][i] == board[pos.row][pos.col] )
			{
				return false;
			}
		}
		// Check for column
		for (int i = 0; i < 9; i++)
		{
			if (i != pos.row && board[i][pos.col] != '.' && board[i][pos.col] == board[pos.row][pos.col] )
			{
				return false;
			}
		}
		// Check for 3*3 grid
		int nCurRow = pos.row/3*3;
		int nCurCol = pos.col/3*3;
		for (int i = nCurRow; i < nCurRow+3; i++)
		{
			for (int j = nCurCol; j < nCurCol+3; j++)
			{
				if (i != pos.row && j != pos.col && board[i][j] != '.' && board[i][j] == board[pos.row][pos.col])
				{
					return false;
				}
			}
		}

		return true;
	}

	void solveSudoku(vector<vector<char> > &board) {
		if (board.size() != 9 || board[0].size() != 9)
		{
			return;
		}

		vector<Position> vPos;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (board[i][j] == '.')
				{
					Position pos;
					pos.row = i; pos.col = j;
					vPos.push_back(pos);
				}
			}
		}

		if (vPos.size() > 0)
		{
			int posIdx = 0;
			bool bForward = true;
			while (posIdx >= 0)
			{
				Position &pos = vPos[posIdx];
				if (board[pos.row][pos.col] == '.')
				{
					board[pos.row][pos.col] = '1';
				}

				if (bForward)
				{
					if (isValidSudoku(board, pos))
					{
						posIdx++;
						if (posIdx == vPos.size())
						{
							return;
						}
					}
					else
					{
						bForward = false;
					}
				}
				else
				{
					char &curCh = board[pos.row][pos.col];
					if (curCh == '9') // has to backtrace
					{
						curCh = '.';
						posIdx--;
					}
					else
					{
						curCh += 1;
						bForward = true;
					}
				}
			}
		}
	}
};