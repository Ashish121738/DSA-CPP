#include<iostream>
using namespace std;
char convert(char alpha){
    char ans;
    return ans=alpha-32;
//or
// return ans= alpha-'a'+'A';

}
int main(){
char name;
cin>>name;
cout<<convert(name);
}