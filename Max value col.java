long dpCol[][] = new long[R][C];

for(int row = 0; row < R; row++) {
    for(int col = 0; col < C; col++) {

        if(row == 0) {
            dpCol[row][col] = grid[row][col];
        }
        else {
            dpCol[row][col] = Math.max(
                dpCol[row - 1][col],
                grid[row][col]
            );
        }
    }
}