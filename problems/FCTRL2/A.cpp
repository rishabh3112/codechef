#include<bits/stdc++.h>
using namespace std;

int multiply(int* fac, int num, int digits){
    int carry = 0;
    for(int i=0;i<=digits;i++){
        int x = fac[i]*num;
        fac[i] = (x+carry)%10;
        carry = (x+carry)/10;

        if(i==digits&&carry>0){
            digits++;
        }
    }
    return digits;
}
void printFac(int* fac, int digits){
    if(digits == 0 && fac[0]==1){
        cout<<"1\n";
        return;
    }
    for(int i=digits; i>=0; i--){
        cout<<fac[i];
    }
    cout<<"\n";
}
void factorial(int num, int digits, int* fac){
    if(num==1)
    {
        printFac(fac,digits);
        return;
    }
    digits = multiply(fac,num,digits);
    factorial(num-1,digits,fac);
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,num;
    cin>>t;
    for(int i=0; i<t; i++){
        int* fac = new int[161];
        fac[0] = 1;
        for(int i=1; i<161; i++){
            fac[i]=0;
        }
        cin>>num;
        factorial(num,0,fac);
        delete[] fac;
    }
    return 0;
}
