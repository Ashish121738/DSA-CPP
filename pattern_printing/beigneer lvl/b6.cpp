// #include <iostream>
// using namespace std;

// int main(){
//     int i,j;
//     for(i=5;i<=25;i=i+5){
//         for(j=1;j<=5;j++){
//             cout<<j+(i-5)<<" ";
//         }
//         cout<<endl;
//     }
// }

//second method



#include <iostream>
using namespace std;

int main(){
    int i,j,count=1;
    for(i=1;i<=5;i=i+1){
        for(j=1;j<=5;j++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}

// third method


// #include <iostream>
// using namespace std;

// int main(){
//     int i,j;
//     for(i=1;i<=5;i=i+1){
//         for(j=1;j<=5;j++){
//             cout<<(i-1)*5+j<<" ";
//         }
//         cout<<endl;
//     }
// }