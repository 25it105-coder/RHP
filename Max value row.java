int grid[][] = new int[R][C];
long dpRow[][] = new long[R][C];

for(int row = 0; row < R; row++) {
    for(int col = 0; col < C; col++) {
        grid[row][col] = sc.nextInt();

        if(col == 0) {
            dpRow[row][col] = grid[row][col];
        }
        else {
            dpRow[row][col] = Math.max(
                dpRow[row][col - 1],
                grid[row][col]
            );
        }
    }
}