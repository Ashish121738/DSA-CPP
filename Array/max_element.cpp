#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array Size: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter element in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int i=0;
    while(i<n){
        if(arr[i]>max){
        max=arr[i];
        }
    i++;
    }
    cout<<"Maximum Element in an array is: "<<max;
}