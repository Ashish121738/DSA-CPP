#include<iostream>
using namespace std;
int main(){
    int ans=0,n,mul=1;
    cout<<"Enter your binary number: ";
    cin>>n;
    while(n){
        int rem=n%10;
        n=n/10;
        ans=ans+rem*mul;
        mul=mul*2;
    }
    cout<<ans;


    return 0;
}