#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin>>T;
    for(;T>0;--T){
        char card[2][3];
        cin>>card[0];
        cin>>card[1];
        cout<<setw(3)<<card[0]<<card[1];
    }
    return 0;
}