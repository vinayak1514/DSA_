#include<iostream>
using namespace std;
void PrintArray(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}
void insertionSort(int arr[],int n){
    for(int i =1; i <n; i++){
        int temp = arr[i];
        int j = i-1;
        for (; j>=0; j--){
                if (arr[j]>temp){
                    arr[j+1] = arr[j];
                }
                else {
                    break;
                }
                
        }
        arr[j+1] =temp;
    }
}

int main(){
    int arr[5] = {5,3,2,7,1};
    insertionSort(arr,5);
    PrintArray(arr,5);
}