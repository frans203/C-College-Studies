#include <stdio.h>

int main(){
    int mat[2][3] = {{1,2,3}, {3,2,1}};
    double mat[3][2] = {{1}, {2}, {3}}; //others will be filled with zeros.
    int exc[2][3] = {1,2,3,4,5,6}; //the first row: 1,2,3 ; second row: 4,5,6
    //accessing arrays
    int arr[3] = {1,2,3};//0,1,2 to access elements. Array is zero based order.
    //to access items in 2 di array you need to specify the exact row and the exact column
    //mat[1][1] = 1
    //exc[1][2] = 0 


    return 0;
}