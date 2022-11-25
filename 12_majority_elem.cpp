#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
//! hasing can be used in this problem
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}

int majorityElem(){
    int n;cin>>n;
    int a[n];
    rep(i,0,n)
        cin>>a[i];
    
    int temp[n+1];
    rep(i,0,n){
        temp[i]=0;
    }
    rep(i,0,n){
        temp[a[i]]++;
    }
    int k = INT_MIN;
    rep(i,0,n){
        k = max(k,temp[i]);
    }
    cout<<k<<endl;
    return k;
}
//* brute force
void maxelem(){
    int n;cin>>n;
    vector<int> a(n,0);
    int cnt=0;
    int k=INT_MIN;
    int firstelem = a[0];
    rep(i,0,n){
        rep(j,i,n){
            if(a[j]==firstelem){
                cnt++;
            }

        }
    }

}
int main()
{
    majorityElem();
    return 0;
}