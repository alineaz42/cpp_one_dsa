#include"bits/stdc++.h"
using namespace std;
int sum(int n){
    if(n==1){
        return n;
    }
    return n+sum(n-1);
}
//* find a^b using recursion
//* base case if b==1 return a
//* generalize a*fn(a,b-1);
int apowb(int a,int b){
    if(b==1){
        return a;
    }
    return a*apowb(a,b-1);
}
int main()
{
    cout<<sum(100)<<endl;
    cout<<apowb(3,3)<<endl;
    return 0;
}


// #include"bits/stdc++.h"
// using namespace std;

// void printName(string name,bool alive){
//     if(!alive){
//         cout<<"Another death."<<endl;
//         return;
//     }
//     while(alive){
//         cout<<name<<",You are still alive.."<<endl;
//         printName(name,alive);
//     }
// }
// int main()
// {
//     string name;
//     cin>>name;
//     bool alive;
//     cin>>alive;
//     printName(name,alive);   
//     return 0;
// }