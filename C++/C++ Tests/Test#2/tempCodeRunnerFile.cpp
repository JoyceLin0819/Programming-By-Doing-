/2D array
    Array2D aiData = {{1,2,3}, {4,5,6}, {7,8,9}};
    Array2D *p2DArray = NULL; // Pointer to the 2D Array
    int iRow = 0, iCol = 0; // row and col
    p2DArray = &aiData; // Assign address of array to the pointer

    for (iRow = 0; iRow < ROW; ++iRow)
    {
        for(iCol = 0; iCol < COL; ++iCol)
            printf(iRow, iCol, (*p2DArray) [iRow][iCol]);
    }
    printf("\n");