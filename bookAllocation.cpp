#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m ,int mid){
        int studentCout =1;
        int pagesum = 0;
        for(int i =0;i<n;i++){
            if(pagesum+arr[i]>=mid){
                    pagesum+=arr[i];
            }
            else{
                studentCout++;
                if (studentCout>m || arr[i]>mid){
                    return false;
                }
                pagesum=arr[i];
            }
            if(studentCout > m) {
            return false;
        }
        }
        return true;
}

int BookAllocation(int arr[],int n,int m){
        int start = 0;
        int sum = 0;
        int end = sum;
        int ans = -1;
        int mid = start +(end-start)/2;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
       while(start<=end) {
        if (ispossible(arr,n,m,mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid+1;
        }
        mid = start +(end-start)/2;
        
        }
    return ans;

}

int main(){
    int arr[4] = {10,20,30,40};
    cout << BookAllocation(arr,4,2);
}