class Solution {
    public int findCircleNum(int[][] isConnected) {
        int n=isConnected.length;
        boolean[] visited=new boolean[n];
        int province=0;
        int i;
        for(i=0;i<n;i++){
            if(!visited[i]){
                province++;
                dfs(isConnected,visited,i);
            }
        }
        return province;
    }
    public void dfs(int[][] isConnected,boolean[] visited,int i){
        visited[i]=true;
        for(int j=0;j<isConnected.length;j++){
            if(isConnected[i][j]==1 && !visited[j]){
                dfs(isConnected,visited,j);
            }
        }
    }
}
