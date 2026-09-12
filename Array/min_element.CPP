//FIND MINIMUL ELEMENT IN AN ARRAY
#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the element in array: ";
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum element is: "<<min;
}