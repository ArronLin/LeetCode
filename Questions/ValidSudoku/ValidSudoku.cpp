#include "common.h"

class ValidSudoku {
public:
	bool isValidSudoku(vector<vector<char> > &board) {
		if (board.size() != 9 || board[0].size() != 9)
		{
			return false;
		}

		int hashMap[10] = {0};

		for (int i = 0; i < 9; i++)
		{
			memset(hashMap, 0, sizeof(hashMap));
			for (int j = 0; j < 9; j++)
			{
				if (board[i][j] == '.')
				{
					continue;
				}
				if (hashMap[board[i][j]-'0'] == 1)
				{
					return false;
				}
				hashMap[board[i][j]-'0']++;
			}
		}

		for (int i = 0; i < 9; i++)
		{
			memset(hashMap, 0, sizeof(hashMap));
			for (int j = 0; j < 9; j++)
			{
				if (board[j][i] == '.')
				{
					continue;
				}
				if (hashMap[board[j][i]-'0'] == 1)
				{
					return false;
				}
				hashMap[board[j][i]-'0']++;
			}
		}

		for (int i = 0; i < 9; i += 3)
		{
			for (int j = 0; j < 9; j += 3)
			{
				memset(hashMap, 0, sizeof(hashMap));
				for (int ii = 0; ii < 3; ii++)
				{
					for (int jj = 0; jj < 3; jj++)
					{
						if (board[i+ii][j+jj] == '.')
						{
							continue;
						}

						if (hashMap[board[i+ii][j+jj]-'0'] == 1)
						{
							return false;
						}
						hashMap[board[i+ii][j+jj]-'0']++;

					}
				}
			}
		}

		return true;
	}
};