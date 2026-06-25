// Problem: Rat Maze With Multiple Jumps
// Platform: GeeksforGeeks
// Link:https://www.geeksforgeeks.org/problems/rat-maze-with-multiple-jumps3852/1

class Solution {
public:
    bool solve(int i,int j,vector<vector<int>>& mat,vector<vector<int>>& ans,vector<vector<int>>& vis,int n){
        if(i>=n||j>=n||mat[i][j]==0)
            return false;

        if(i==n-1&&j==n-1){
            ans[i][j]=1;
            return true;
        }

        if(vis[i][j])
            return false;

        vis[i][j]=1;
        ans[i][j]=1;

        int jump=mat[i][j];

        for(int k=1;k<=jump;k++){
            if(solve(i,j+k,mat,ans,vis,n))
                return true;

            if(solve(i+k,j,mat,ans,vis,n))
                return true;
        }

        ans[i][j]=0;
        return false;
    }

    vector<vector<int>> shortestDist(vector<vector<int>>& mat){
        int n=mat.size();

        if(mat[0][0]==0)
            return {{-1}};

        vector<vector<int>> ans(n,vector<int>(n,0));
        vector<vector<int>> vis(n,vector<int>(n,0));

        if(solve(0,0,mat,ans,vis,n))
            return ans;

        return {{-1}};
    }
};
