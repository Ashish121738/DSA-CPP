
// MEthod-1

// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter the array size: ";
//     cin>>n;
//     cout<<"Enter the element in array: ";
//     int arr[1000];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int temp[1000];
//     int i=n-1,j=0;
//     while(i>=0){
//         temp[j]=arr[i];
//         j++;
//         i--;
//     }
//     i=0,j=0;
//     while(i<n){
//         arr[i]=temp[j];
//         i++;
//         j++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//METHOD-2

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
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    } for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}    