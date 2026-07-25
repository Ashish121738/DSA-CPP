#include <iostream>
using namespace std;

int main(){
    int i,j;
    char name='a';
    for(i=1;i<=5;i++){
        name='a'+(i-1);
        for(j=1;j<=5;j++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}