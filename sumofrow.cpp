#include<iostream>
using namespace std;
int  sumOfArray(int arr[][3],int row,int col){
        int maxi = INT32_MIN;
        int rowIndex = -1;
        for(int i=0; i<row; i++){
            int sum = 0;
            for(int j=0;j<col;j++){
                sum+=arr[i][j];
            }

            if (sum>maxi){
                maxi = sum;
                rowIndex = i;
            }
        }
   cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}

int main(){
    int arr[3][3];
    for(int row =0; row<3; row++){
         for(int col =0; col<3; col++){
            cin >> arr[row][col];
         }
    }
    sumOfArray(arr,3,3);
}