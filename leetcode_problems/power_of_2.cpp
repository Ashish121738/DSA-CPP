#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    if(n<1){
        cout<<"No it is not a power of 2";

    }

    while(n!=1){
         if(n%2==1){
            cout<<"Not a power of 2";
        return 0;
        }
        n=n/2;
       
    }
cout<<"Yes it is a power of 2";
}