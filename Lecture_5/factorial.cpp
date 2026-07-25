#include<iostream>
using namespace std;

int main(){
    int i,num;
    long long sum;
    cout<<"enter a number:";
    cin>>num;
    sum=1;
    for(i=1;i<=num;i++){
        sum= sum*i;
    }
    cout<<sum<<endl;
}