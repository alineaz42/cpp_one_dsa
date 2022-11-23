#include"bits/stdc++.h"
using namespace std;

long long factorial(long long n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
//* number of trainlin zeros of a factorialed number
int trailingZeros(int n){
    int res = 0;
    for(int i=5 ;i<=n;i= i*5){
        res = res + (n/i);
    }
    return res;
}
//* palindrom number
bool isPalindrom(long long n){
    long long num= 0;
    long long temp = n;
    while(temp>0){
        long long temp2 = temp%10;
        num = num*10+temp2;
        temp/=10;
    }
    if(num == n){
        return true;
    }
    return false;
}


int main()
{
    // long long n = factorial(12);
    // cout<<n<<endl;
    // cout<<trailingZeros(12)<<endl;
    // cout<<factorial(12)<<endl;
    // // cout<<factorial(25)<<endl;//* impossible to calculate overflow i guess
    // cout<<trailingZeros(25)<<endl;
    // cout<<isPalindrom(121)<<endl;
    // vector<bool> isPrime(4,true);
    // for(auto i:isPrime){
    //     cout<<i<<" ";
    // }
    cout<<isPalindrom(121)<<endl;
    return 0;
}