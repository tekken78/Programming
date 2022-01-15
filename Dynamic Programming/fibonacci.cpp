#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll f[10000000];
ll fib(ll n){

    f[0]=0;
    f[1]=1;

    if(f[n]!=-1)
    return f[n];

    f[n]= fib(n-1)+fib(n-2);

    return f[n];
}

int main(){

    ll n;
    cin>>n;
    memset(f,-1,sizeof(f));
    cout<<fib(n);
}