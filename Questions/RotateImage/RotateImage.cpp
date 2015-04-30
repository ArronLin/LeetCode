#include "common.h"

class RotateImage {
public:
	void rotate(vector<vector<int> > &matrix) {
		int rows = matrix.size();
		if(rows == 0) return;
		int cols = matrix[0].size();
		if(cols == 0 || rows != cols) return;
		for(int ilevel = 0; ilevel < rows / 2; ++ ilevel) {
			int lCount = rows - 1 - 2 * ilevel;
			for(int i = 0; i < lCount; ++i) {
				//caculate the positions
				int topr = ilevel;
				int topc = ilevel + i;
				int rightr = ilevel + i;
				int rightc = cols - 1 - ilevel;
				int downr = rows - 1 - ilevel;
				int downc = cols - 1 - ilevel - i;
				int leftr = rows - 1 - ilevel - i;
				int leftc = ilevel;
				//swap them
				int temp = matrix[topr][topc];
				matrix[topr][topc] = matrix[leftr][leftc];
				matrix[leftr][leftc] = matrix[downr][downc];
				matrix[downr][downc] = matrix[rightr][rightc];
				matrix[rightr][rightc] = temp;
			}
		}
	}
};