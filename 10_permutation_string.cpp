#include"bits/stdc++.h"
using namespace std;

//* palindrom using ..
void palindrom1(string s){
    int st = 0;
    int n = s.size();
    int end = n-1;
    while(st<=end){
        if(s[st]!=s[end]){
            cout<<"Not a palindrom."<<endl;
            return;
        }
        if(s[st]==s[end]){
            if(st==end){
                cout<<"Palindrom.."<<endl;
                break;
            }
            st +=1;
            end -= 1;
            continue;
        }
    }
}
//* for recursive
bool isPalindrom(string s,int l,int r){
    if(r>=l){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    return isPalindrom(s,l+1,r-1);
}
//* palindrom 3

//* print the power set of a given string
void powerSet(string s,int i,string curr){
    if(i==s.length()){
        cout<<curr<<" ";
        return;
    }
    powerSet(s,i+1,curr+s[i]);
    powerSet(s,i+1,curr);
}
//* permutation of all given string
void permutation(string s,int l,int r){
    //! will do it tomorrow
}
//! % or modulo can only be used with integer values not float or anything else
int main()
{
    // palindrom1("aba");
    // cout<<isPalindrom("aba",0,2)<<endl;
    // cout<<isPalindrom("abcba",0,4)<<endl;
    // cout<<isPalindrom("abcde",0,4)<<endl;
    powerSet("abc",0,"");
    return 0;
}