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
        if(i==1){
            cout<<last<<endl;
           continue;
        }
        if(i==2){
        cout<<prev<<endl;
           continue;
        }
       curr=last+prev;
       last=prev;
       prev=curr;
       cout<<curr<<endl;
    }
}



// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10; // Number of terms
//     int t1 = 0, t2 = 1, nextTerm = 0;

//     cout << "Fibonacci Series: ";

//     for (int i = 1; i <= n; ++i) {
//         if (i == 1) {
//             cout << t1 << ", ";
//             continue;
//         }
//         if (i == 2) {
//             cout << t2 << ", ";
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//         cout << nextTerm << (i == n ? "" : ", ");
//     }
//     return 0;
// }   