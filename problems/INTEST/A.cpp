#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n,k,c = 0,num;
    cin>>n>>k;
    for(long int i=0; i<n; i++){
        cin>>num;
        if(num%k==0){
            c++;
        }
    }
    cout<<c;
    return 0;
}
