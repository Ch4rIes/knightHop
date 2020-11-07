/* 
 LANG: CPP
 NAME: CHARLES
 QUESTION: 
 COMMENT:
 
 
*/

#include <bits/stdc++.h>

using namespace std;
int totalCounter = 0;
int visited[9][9];
vector<int> values;
void letsHop(int x1 , int y1 , int currentStep,int destX , int destY) {
    totalCounter++;
    cout<<totalCounter<<"_____ count"<<endl;
    if(visited[x1][y1]){
        return;
    }
    visited[x1][y1] = true;
    cout<<x1<<" "<<y1<< "current step is "<< currentStep<<endl;
    if(x1<1 || y1>8 || y1 <1 || x1>8){
        return;
    }
    if (x1 == destX && y1 == destY) {
        values.push_back(currentStep);
        return;
    } else {
        for(int increase = 1 ; increase <= 2 ; increase++){
            letsHop(x1+increase , y1 + 3 - increase , currentStep+1 , destX , destY);
            letsHop(x1+increase , y1 - 3 + increase , currentStep+1 , destX , destY);
            letsHop(x1-increase , y1 + 3 - increase , currentStep+1 , destX , destY);
            letsHop(x1+increase , y1 - 3 + increase , currentStep+1 , destX , destY);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int destX , destY;
    int a, b;
    cin>>a>>b>>destX>>destY;
    letsHop(a , b , 0 , destX , destY);
    long small = 20000000;
    for(int i : values){
        if(i < small){
            small = i;
        }
    }
    cout<<" "<<endl;
    cout<<"dadsa"<<endl;
    return 0;
}
