#include<iostream>
using namespace std;
int squareRoot(int n ){
    int start =0;
    int end = n;
    int mid = start +(end-start)/2;
    int ans = 0;
    while(start<=end){
        int sqrt = mid * mid;
        if (n==sqrt){
            return mid;
        }
        else if(n<sqrt){
                end = mid -1;
        }
        else if (n>sqrt){
            start = mid +1;
            ans = mid;
        }
        
        mid = start + (end-start)/2;
    }
    return ans;
}
double completesqrt(int n,int precision,int tempsqrt){
        double factor = 1;
        double ans = tempsqrt;
        for(int i = 0; i<precision; i++){
            factor = factor/10;
            for(double j = ans; j*j<n; j=j+factor){
                ans=j;
            }
        }
        return ans;
}
int main(){
    int n;
    cin>>n;
    int tempsqrt = squareRoot(n);
    cout << completesqrt(n,3,tempsqrt);
}