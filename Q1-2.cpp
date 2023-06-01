int* maxCoords(int** matrix, int numRows, int numCols)
{
    int maxVal = matrix[0][0];
    int maxRow = 0;
    int maxCol = 0;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            if (matrix[i][j] > maxVal)
            {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    int* result = new int[2];
    result[0] = maxRow;
    result[1] = maxCol;
    return result;
}
