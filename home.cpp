#include <iostream>
using namespace std;
int main() {
    int money = 2080;
    int note_100 = 0 ;
    int note_50 = 0 ;
    int note_20 = 0 ;
    int note_10 = 0 ;
    if (money>=100){
        note_100 = note_100 + (money/100);
        money = money%100;
    }
    if (money>=50){
        note_50 = note_50 + (money/50);
        money = money%50;
    }
    if (money>=20){
        note_20 = note_20 + (money/20);
        money = money%20;
    }
    if (money>=10){
        note_10 = note_10 + (money/10);
        money = money%10;
    }
    cout <<"100 rupee note are "<<note_100<<endl;
    cout <<"50 rupee note are "<<note_50<<endl;
    cout <<"20 rupee note are "<<note_20<<endl;
    cout <<"10 rupee note are "<<note_10<<endl;
        
}