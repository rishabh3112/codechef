#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin>>T;
    for(;T>0;--T){
        string card[2];
        cin>>card[0];
        cin>>card[1];
        // Face swap not required
        if(strcmp(card[1].c_str(),"bob")||strcmp(card[0].c_str(),"bob")||strcmp(card[1].c_str(),"bbo")||strcmp(card[0].c_str(),"bbo")||strcmp(card[1].c_str(),"obb")||strcmp(card[0].c_str(),"obb")){
            cout<<true;
            break;
        }else{
            // Face Swaps required
            
        }
    }
    return 0;
}