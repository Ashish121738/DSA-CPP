#include <iostream>
using namespace std;

// age>18 show adult otherwise show teenager
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>18){
        cout<<"You are an adult";
    }
    else{
        cout<<"You are a teenager";
    }

}