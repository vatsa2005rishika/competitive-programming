class Solution {
    public int numIslands(char[][] grid) {
        if(grid == null || grid.length == 0 || grid[0].length == 0){
            return 0;
        }

        int m = grid.length;
        int n = grid[0].length;

        boolean[][] visited = new boolean[m][n];
        int islandcount = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1' && !visited[i][j]){
                    islandcount++;
                    dfs(grid, visited, i, j, m, n);
                }
            }
        }

        return islandcount;
    }

    private void dfs(char[][] grid, boolean[][] visited, int i, int j, int m, int n){
        if(i < 0 || i >= m || j < 0 || j >= n ||
           grid[i][j] == '0' || visited[i][j]){
            return;
        }

        visited[i][j] = true;

        dfs(grid, visited, i-1, j, m, n);
        dfs(grid, visited, i+1, j, m, n);
        dfs(grid, visited, i, j-1, m, n);
        dfs(grid, visited, i, j+1, m, n);
    }
}
