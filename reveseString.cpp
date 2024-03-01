#include<iostream>
#include<vector>
using namespace std;

void removeValue(string s){
        int i = 0;
        int count =0;
        int n = s.length();
        while(i<n){
            if(s[i]==s[i+1]){
                    i++;
                    count++;
            }
            else{
                s.erase(s[i],count);
            }
        }
        // return s;
}
void print(vector<char>& s){
    for(int i=0; i<s.size(); i++){
        cout << s[i]<< endl;
    }
}
int main(){
    string s = "abbaca";
    removeValue(s);
}