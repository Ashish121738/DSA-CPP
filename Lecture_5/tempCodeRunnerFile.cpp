#include<iostream>
using namespace std;
int main(){
    int n,curr,prev,last,i;
    cout<<"enter the number of terms:";
    cin>>n;
    last=0;
    prev=1;
    curr=0;
    for(i=1;i<=n;i++){
        if(n==1){
            cout<<last<<endl;
            return 0;
        }
        if(n==2){
            cout<<last<<endl;
            cout<<prev<<endl;
            return 0;
        }
       curr=last+prev;
       last=prev;
       prev=curr;
       cout<<curr<<endl;
    }
return 0;
}