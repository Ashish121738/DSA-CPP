
//FIND MINIMUL ELEMENT IN AN ARRAY
#include <iostream>
using namespace std;
int main(){

    int n,x;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the element in array: ";
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element which you want find: ";
    cin>>x;
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            index=i;
            cout<<"Element "<<x<<" is present at "<<i<<" index";
            return 0;
        }
    }
    cout<<index;
}