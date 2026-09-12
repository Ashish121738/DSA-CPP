#include<iostream>
using namespace std;
int trailingzeroes(int n){
    int count=0;
    while(n>=5){
        count+=n/5;
        n/=5;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<"The number of trailing zeroes in "<<n<<"! is: "<<trailingzeroes(n);
}