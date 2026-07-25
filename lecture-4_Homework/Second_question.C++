//print all even numbers from 1 to 100
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num<=1){
        cout<<"Please enter a number greater than 1";
    }else{
        for(int i=2;i<=num;i+=2){
            cout<<i<<endl;
        }
    }
}