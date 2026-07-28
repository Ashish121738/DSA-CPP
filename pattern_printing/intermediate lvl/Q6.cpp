// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5-row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

/*
   * * * * *                      
   * * * *                      
   * * *
   * *
   *
  


   1-5    5-(row-1)
   2-4
   3-3
   2-2
   1-2
*/ 


//OR 


// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     for(row=5;row>=1;row--){
//         for(col=1;col<=row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// OR THird Way

#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=5;row>=1;row--){
        for(col=row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
}