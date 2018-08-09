#include<bits/stdc++.h>
using namespace std;

int S(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    int sum = 0;
    for (int p=2; p<=n; p++){
       if (prime[p]&&n%p==0){
           sum+=p;
       }
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    for(;T>0;--T){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" : "<<S(a[i])<<"\n";
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                if(i!=j){
                    if(a[i]==a[j]){
                        c+=1;
                    }
                    else{
                        int x = S(a[i]);
                        if(x!=0)
                            if((a[j]%a[i]==0)&&(S(a[j])%x==0)){
                                c+=1;
                            }
                    }
                }
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}