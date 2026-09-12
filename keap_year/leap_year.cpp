#include<iostream>
using namespace std;
int main(){
int year;
cout<<"Enter the year: ";
cin>>year;
if(year%400==0){
    cout<<"yes it is a Leap year";
}else if(year%4==0 && year%100!=0){
    cout<<"Yes it is a Leap year";
}else{
    cout<<"No it is not a Leap year";
}
} 