#include <bits/stdc++.h>

using namespace std;

int main(){
    int maior = 0;
    cin>>maior;

    for(int i = 0; i<3; i++){
        int entrada= 0;
        cin >> entrada;
        if(entrada > maior){
            maior = entrada;
        }
    }
    cout<<"Maior: "<< maior;
}