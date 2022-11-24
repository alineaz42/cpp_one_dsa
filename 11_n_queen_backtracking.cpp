// #include"bits/stdc++.h"
// using namespace std;

// bool isSafe(vector<vector<int>> a,int x,int y,int n){
//     //* for row wise
//     for(int row = 0; row<x;row++){
//         if(a[row][y]==1){
//             return false;
//         }
//     }
//     //* for diagonal wise 
//     //! left diagonal
//     int row = x;
//     int col = y;
//     while(row >= 0 && col >= 0){
//         if(a[row][col]==1){
//             return false;
//         }
//         row--;
//         col--;
//     }
//     //! right diagonal
//     row = x;
//     col = y;
//     while(row >= 0 && col <n){
//         if(a[row][col]==1){
//             return false;
//         }
//         row--;
//         col++;
//     }
//     //* if the position is safe
//     return true;

// }
// bool nQueen(vector<vector<int>> a,int x,int n){//! x = row,n = size
//     if(x>=n){
//         return true;
//     }
//     for(int col = 0;col<n;col++){
//         if(isSafe(a,x,col,n)){
//             a[x][col]=1;
//             if(nQueen(a,x+1,n)){
//                 return true;
//             }
//             a[x][col]=0;//! this step is back tracking
//         }
//     }
//     return false;
// }
// int main()
// {
//     //* the 8*8 board
//     int n;cin>>n;
//     vector<vector<int>> a(n,vector<int> (n,0));

//     cout<<endl;
//     if(nQueen(a,0,n)){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }else{
//         cout<<"Not possible"<<endl;
//     }
//     return 0;
// }

//! above code aint working properly

#include"bits/stdc++.h"
using namespace std;
#define N 8

void printSolution(vector<vector<int>> board){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<" "<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool isSafe(vector<vector<int>> board,int row,int col){
    int i,j;
    for(i=0;i<col;i++){
        if(board[row][i]){
            return false;
        }
    }
    for(i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]){
            return false;
        }
    }
    for(i=row,j=col;j>=0 && i <N;i++,j--){
        if(board[i][j]){
            return false;
        }
    }
    return true;
}
bool solveNQUtil(vector<vector<int>> board,int col){
    if(col>=N){
        return true;
    }
    for(int i=0;i<N;i++){
        if(isSafe(board,i,col)){
            board[i][col]=1;
            if(solveNQUtil(board,col+1)){
                return true;
            }
            board[i][col]=0;
        }
    }
    return false;

}

bool solveNQ(){
    vector<vector<int>> board(N,vector<int> (N,0));
    if(solveNQUtil(board,0)==false){
        cout<<"Solution does not exist"<<endl;

        return false;
    }
    printSolution(board);
    return true;
}
int main()
{
    solveNQ();
    return 0;
}