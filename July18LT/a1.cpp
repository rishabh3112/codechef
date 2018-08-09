#include<bits/stdc++.h>
using namespace std;

int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    for(;T>0;--T){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if((a+b+c) != x+y){

            cout<<"NO\n";
        }
        else if(min(a,min(b,c))>min(x,y)){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
            
    }
    return 0;
}