#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[1000];
    cout<<"Enter position of fibonacci series of that position element you want";
    cin>>n;
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<"Fibonacci element at position "<<n<<" is: "<<arr[n-1];
}