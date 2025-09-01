#include <bits/stdc++.h>

using namespace std;

int main(){
    int comprimento=0, altura = 0;
    cin>>comprimento>>altura;
    for(int i = 0; i < comprimento; i++){
        for(int e = 0; e < altura; e++){
            cout<<"* ";
        }
        cout<<endl;
    }
}