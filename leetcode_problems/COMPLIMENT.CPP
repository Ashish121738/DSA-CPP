#include<iostream>
using namespace std;
int main(){
    int n,rem,ans=0,mul=1;
    cout<<"Enter your Number:";
    cin>>n;
    while(n){
        rem=n%2;
    //     if(rem==1){
    //     rem=0;}
    // else{
    // rem=1;
    //     }
    rem=rem^1;

    n/=2;
    ans=ans+rem*mul;
    mul=mul*2;

    }
    cout<<ans;
}