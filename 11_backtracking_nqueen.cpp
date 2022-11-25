#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

//! isSafe will check if it is in the same column or row or diagonal
bool isSafe(int row,int col,vector<vector<int>> &board,int n){
    int x = row,y=col;
    //* check for same row
    while(y>=0){
        if(board[x][y]==1){
            return false;
        }
        y--;
    }
    //* check for the diagonal
    x = row;
    y = col;
    while(x>=0 and y>=0){
        if(board[x][y]==1){
            return false;
        }
        y--;
        x--;// upper diagonal left
    }
    //* lower diagonal on the left
    x = row;y=col;
    while(x<n && y>=0){
        if(board[x][y]==1){
            return false;
        }
        y--;
        x++;
    }
    //! if no one returned false 
    return true;
}
void addSolution(vector<vector<int>> &board,vector<vector<int>> & ans,int n){
    vector<int> temp;//* for storing the values
    rep(i,0,n){
        rep(j,0,n){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}
void solve(int col,vector<vector<int>> &ans,vector<vector<int>> &board,int n){
    //* base case if all columns are filled 
    if(col==n){
        addSolution(board,ans,n);
        return;
    }
    // solve 1 case and rest recurssion will take care
    rep(row,0,n){
        if(isSafe(row,col,board,n)){
            //* if safe then place the queen
            board[row][col]=1;
            //! call the recurssion for the next collumn
            solve(col+1,board,ans,n);
            //! now backtracking starts 
            board[row][col]=0;
        }
    }
}
vector<vector<int>> nqueen(int n){
    vector<vector<int>> board(n,vector<int>(n,0));//* an empty board initialized
    vector<vector<int>> ans;
    solve(0,ans,board,n);//* 0 is the first column
    return ans;
}
int main()
{
    //! my code doesnt work properly
    vector<vector<int>> ans =  nqueen(8);
    vector<vector<int>> :: iterator it;
    rep(i,0,8){
        rep(j,0,8){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}