// Let's do something fun lets code c program in cpp file well as we know c is a subset of cpp so we can do that.

#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the all four sides of of rectangle:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a==b && c==d)||(a==c && b==d)||(a==d && b==c)){
        printf("Yes it is a rectangle");
    }else{
        printf("No it is not a rectangle");
    }
    
}