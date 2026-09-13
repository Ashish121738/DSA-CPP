// let suppose we have an array like [2,8,9,4,5] &
// we have to rotate this array by 1 like [5,2,8,9,4]

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[1000];
    int temp;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    cout<<"Rotated Array by 1 looks like: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
