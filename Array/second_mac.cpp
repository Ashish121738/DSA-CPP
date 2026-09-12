#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[1000];
    cout<<"Size of array: ";
    cin>>n;
    cout<<"Enter element in array: ";
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(ans!=arr[i]){
            second=max(arr[i],second);
        }
    }
    cout<<"Second largest element: "<<second;
}