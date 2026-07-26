#include <iostream>
using namespace std;
int main(){
    // Print number from 280 to 250 with the help of for loop.

    int i,d=7,a=220,n, an=730,sum=0,j;
    char alpha;
    for(i=280;i>=250;i--){
        // cout<<i<<endl;
    }


    // Print char from ‘A’ to ‘Z’ with the help of a for loop.

    for(alpha='A';alpha<='Z';alpha++){
        // cout<<alpha<<endl;
    }

    // Print char from ‘Z’ to ‘A’ with the help of a for loop.

    
    for(alpha='Z';alpha>='A';alpha--){
        // cout<<alpha<<endl;
    }


    // There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
    for(i=a;i<=730;i=i+7){
        // cout<<i<<endl;
    }
//OR
    n=(an-a)/d + 1;
    // cout<<n<<endl;
    for(i=0;i<n;i++){
        // cout<<a+i*d<<endl;
    }

//Print Sum of square of first n natural number.

    for(i=1;i<=14;i++){
    sum=sum+i;
    
    }
    // cout<<sum*sum;

    //Print Sum of cube of first n natural number
    for(i=1;i<=14;i++){
    sum=sum+i;
    
    }
    // cout<<sum*sum*sum;

    //   1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25

    for(j=1;j<=5;j++)
    {
    for(i=1;i<=5;i++){
        // cout<<i*i<<" ";
    }
    // cout<<endl;
    }
    for(j=1;j<=5;j++)
    {
    for(i=1;i<=5;i++){
        // cout<<i*i*i<<" ";
    }
    // cout<<endl;
    }
    /*F G H I J K  
      F G H I J K
      F G H I J K
      F G H I J K
      F G H I J K
    */
    for(j=1;j<=5;j++)
    {
    for(char rev='F';rev<='K';rev++){
        // cout<<rev<<" ";
    }
    // cout<<endl;
 
}
/*     4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4  
       4 4 4 4 4 4
       4 4 4 4 4 4 
*/
for(j=1;j<=5;j++){
    for(i=1;i<=5;i++){
        cout<<4<<" ";
    }
    cout<<endl;
}
}
