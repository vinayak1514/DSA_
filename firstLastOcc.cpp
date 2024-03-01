#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
        int start = 0;
        int end = n-1;
        int mid = start +(end-start)/2;
        int ans = 0;
        while (start <=end){
                if (arr[mid]==key){
                    ans =  mid;
                    end = mid -1;
                }
                else if(arr[mid]<key){
                    start = mid+1;

                }
                else {
                    end = mid -1;
                }
            mid = start+(end-start)/2;
        }
        return ans;
}
int secondOcc(int arr[],int n,int key){
        int start = 0;
        int end = n-1;
        int mid = start +(end-start)/2;
        int ans = -1;
        while (start <=end){
                if (arr[mid]==key){
                    ans =  mid;
                    start = mid +1;
                }
                else if(arr[mid]<key){
                    start = mid+1;

                }
                else {
                    end = mid -1;
                }
            mid = start+(end-start)/2;
        }
    return ans;
}
int main(){
    int even[5] = {1,2,2,2,3};
    cout << firstOcc(even,5,2);
    cout << secondOcc(even,5,2);
}