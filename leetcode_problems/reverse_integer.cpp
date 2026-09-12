#include<iostream>
using namespace std;
int main(){

    int rem,ans=0,n;
    cout<<"Enter your NUmber: ";
    cin>>n;
    while(n){
        rem=n%10;
        n=n/10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            cout<<"Int overflow ";
           return 0;
        }
        ans=ans*10+rem;
    }
    cout<<ans;

}