#include"bits/stdc++.h"
using namespace std;
int fastPower(int a,int b){
    int result = 1;
    while(b>0){
        //* use bit manipulation insted of modulo operator for even odd general b%2!=0 for odd
        if((b & 1)!=0){
            result = result*a;
        }
        a = a*a;
        b = b>>1; // b = b/2  left shift multiply by 2
    }
    return result;
}
int fastPower2(int a,int b){
    int res = 1;
    while(b>0){
        if((b & 1) != 0){
            res = res*a;
        }
        a = a*a;b= b>> 1;
    }
    return res;
}
//* using modulo
//* (a+b)%n = (a%n+b%n)%n
//* (a-b)%n = (a%n-b%n)%n
long long fastPower3(long long a,long long b,int n){
    long long res = 1;
    while(b>0){
        if((b&1)!=0){
            res = (res*a%n)%n;
        }
        a = (a%n * a%n)%n;
        b = b>>1;
    }
    return res;
}
//* other topics
// 1. catalan number 2.pigeon hole principle 3.inclusion-exclusion
int main()
{
    // cout<<fastPower(2,2)<<endl;
    // cout<<fastPower2(3,3)<<endl;
    // cout<<fastPower2(2,2)<<endl;
    cout<<fastPower3(3978439,5,1000000007)<<endl;
    return 0;
}