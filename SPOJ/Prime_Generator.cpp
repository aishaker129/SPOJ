/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 08/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

bool is_prime(int num){
    if(num<=1) return false;
    for(int i=2; i*i<=num; i++){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=n; i<=m; i++){
            if(is_prime(i) && i>1){
                cout<<i<<endl;
            }
        }
        cout<<endl;
    }

    return 0;
}