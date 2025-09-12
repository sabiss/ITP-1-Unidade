#include <bits/stdc++.h>

using namespace std;

int main(){
    float tempoMax;
    cin>>tempoMax;
    int atletasAptos=0;

    while(true){
        float tempoAtleta;
        cin>>tempoAtleta;
        if(tempoAtleta == -1){
            break;
        }else{
            if(tempoAtleta<=tempoMax){
                atletasAptos++;
            }
        }
    }
    float raias = 0;
    if(atletasAptos<8 && atletasAptos!=0){
        raias=1;
    }else{
        raias = ceil(atletasAptos/8.0);
    }
    cout<<atletasAptos<<" "<<raias;
}