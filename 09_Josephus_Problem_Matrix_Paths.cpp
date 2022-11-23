#include"bits/stdc++.h"
using namespace std;


//* number of way to reach from 00 to nm in a matrix
int numofWays(int n,int m){
    if(n==1 || m==1){
        return 1;
    }
    return numofWays(n-1,m)+numofWays(n,m-1);
}
long jos(int n,int k){
    if(n==1){
        return 0;
    }
    return (jos(n-1,k)+k)%n;
}
int main()
{
    // cout<<numofWays(4,3)<<endl;
    // cout<<numofWays(1,3)<<endl;
    cout<<jos(5,3)<<endl;
    return 0;
}