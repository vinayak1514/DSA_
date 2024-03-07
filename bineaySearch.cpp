#include<iostream>
using namespace std;
bool binearySearch(int *arr,int start,int end,int key){
        if (start>end){
            return false;
        }
        int mid = start +(end-start)/2;
        if (arr[mid]==key){
            return true;
        }
        if (arr[mid]>key){
            return binearySearch(arr,0,mid-1,key);
        }
        else{
            return binearySearch(arr,mid+1,end,key);
        }
}
int main(){
    int arr[6] = {3,4,5,10,14,18};
    int size = 6;
    int key = 18;
    int ans = binearySearch(arr,0,size-1,key);
    cout <<"found or not "<< ans << endl;
}