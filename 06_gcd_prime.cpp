#include"bits/stdc++.h"
using namespace std;

vector<bool>  seiveOfErothones(int n){
    vector<bool> isPrime(n+1,true);
    isPrime[0]=false;isPrime[1]=false;
    for(int i=2;i*i<=n;i++){
        for(int j=2*i;j<=n;j+=i){
            isPrime[j]=false;
        }
    }
    return isPrime;
}
//* GCD = greatest common divisor
//* gcd(a,b)=gcd(a-b,b);a>b
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int main()
{
    vector<bool> ans = seiveOfErothones(20);
    for(int i=0;i<ans.size();i++){
        if(ans[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<GCD(15,27)<<endl;
    return 0;
}