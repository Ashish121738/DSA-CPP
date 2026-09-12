#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter a number: ";
    cin>>n;
    int num=n,ans=0,rem;
    while(n){
        rem=n%10;
        n/=10;
        ans=ans*10+rem;

    }
    if(ans==num){
        cout<<"YEs it is a pallindrome,";
    }else{
        cout<<"Not a pallindrome number.";
    }

}