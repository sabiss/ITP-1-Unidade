#include <bits/stdc++.h>

using namespace std;

int main(){
    int a=0, b=0;
    cin>>a>>b;

    if(a<b){
        for(int i = a; i<b+1; i++){
            cout<<i <<" ";
        }
    }else{
        for(int i = a; i>b-1; i--){
            cout<<i <<" ";
        }
    }
}