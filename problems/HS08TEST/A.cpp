#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float X,Y;
    cin>>X>>Y;
    if(Y-(X+0.50)<0){
        cout<<fixed<<setprecision(2)<<Y;
    }
    else if(int(X)%5 != 0){
        cout<<fixed<<setprecision(2)<<Y;
    }
    else{
        cout<<fixed<<setprecision(2)<<Y-(X+0.50);
    }
    return 0;
}