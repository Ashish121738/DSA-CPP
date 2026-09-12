//we have given array of size (N-1) where N is total element as array can contain value from 1 to N
//1<<arr[i]<<N & each element come only one time so one element  will be missed find the element
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[1000];
    cout<<"Size of array: ";
    cin>>n;
    cout<<"Enter element in array: ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans+=arr[i];
    }
    int sum=n*(n+1)/2;
    cout<<"Missing element is: "<<sum-ans;
}