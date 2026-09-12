// Find Bishop all possible moves on a chessboard given its position.

#include<iostream>
using namespace std;
int move(int x, int y){
    int count=0;
    cout<<"The possible moves of bishop are: ";
    count+=min((8-x),(8-y));
    count+=min((8-x),(y-1));
    count+=min((x-1),(y-1));
    count+=min((x-1),(8-y));

    return count;
}

int main(){
    int row,col;
    cout<<"Enter the position of bishop in chessboard (row and column): ";
    cin>>row>>col;
    cout<<"The total possible moves of bishop are: "<<move(row,col);
}