#include<iostream>
#include<math.h>
using namespace std;
int countdigit(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}

bool armstrong(int n,int digit){
    int rem,ans=0;
    int num=n;
    while(num){
        rem=num%10;
        num/=10;
        ans=ans+pow(rem,digit);
    }
    if(ans==n){
        return 1;
    }
    else
    return 0;
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int total_digit=countdigit(n);
    armstrong(n,total_digit)?cout<<"Yes it is an armstrong Number:":cout<<"No it is not an armstrong number";
}