#include "common.h"

class SpiralMatrix {
public:
    void traverseRowIncreasingly(vector<vector<int> > &matrix, vector<int>& vResult, int nStartX, int nEndX, int nY)
    {
        while(nStartX <= nEndX)
        {
            vResult.push_back(matrix[nY][nStartX]);
            nStartX++;
        }
    }
    void traverseRowDecreasingly(vector<vector<int> > &matrix, vector<int>& vResult, int nStartX, int nEndX, int nY)
    {
        while(nEndX >= nStartX)
        {
            vResult.push_back(matrix[nY][nEndX]);
            nEndX--;
        }
    }
    void traverseColIncreasingly(vector<vector<int> > &matrix, vector<int>& vResult, int nStartY, int nEndY, int nX)
    {
        while(nStartY <= nEndY)
        {
            vResult.push_back(matrix[nStartY][nX]);
            nStartY++;
        }
    }
    void traverseColDecreasingly(vector<vector<int> > &matrix, vector<int>& vResult, int nStartY, int nEndY, int nX)
    {
        while(nEndY >= nStartY)
        {
            vResult.push_back(matrix[nEndY][nX]);
            nEndY--;
        }
    }
    void spiralTraverse(vector<vector<int> > &matrix, vector<int>& vResult, int nStartX, int nStartY, int nRow, int nCol)
    {
        int nEndX = nCol-nStartX-1;
        int nEndY = nRow-nStartY-1;
        

        traverseRowIncreasingly(matrix, vResult, nStartX, nEndX, nStartY);
        
        if(nEndY > nStartY)
        {
            traverseColIncreasingly(matrix, vResult, nStartY+1, nEndY, nEndX);
        }
        
        if(nEndX > nStartX && nEndY > nStartY)
        {
            traverseRowDecreasingly(matrix, vResult, nStartX, nEndX-1, nEndY);
        }
        
        if(nEndX > nStartX && nEndY-1 > nStartY)
        {
            traverseColDecreasingly(matrix, vResult, nStartY+1, nEndY-1, nStartX);
        }
    }
    
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int> vResult;
        int nRow = matrix.size();
        if(nRow == 0)
            return vResult;
        int nCol = matrix[0].size();
        
        int nStartX = 0;
        int  nStartY = 0;
        
        while(nRow > nStartX*2 && nCol > nStartY*2)
        {
            spiralTraverse(matrix, vResult, nStartX, nStartY, nRow, nCol);
            nStartX++;
            nStartY++;
        }
        
        return vResult;
    }
};