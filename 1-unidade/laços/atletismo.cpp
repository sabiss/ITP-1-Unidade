#include <bits/stdc++.h>

using namespace std;

int main(){
    int anosValidos = 0;
    int nAnos=0;
    float somaDistancias = 0;

    cin>>nAnos;
    for(int i = 0; i<nAnos;i++){
        float d = 0;
        cin>>d;
        if(d!=-1){
            somaDistancias+=d;
            anosValidos++;
        }
    }
    float media = somaDistancias/anosValidos;
    cout<<fixed<<setprecision(2);
    if(anosValidos==0){
        cout<<"A competicao nao possui dados historicos!";
    }else{
        cout<<media;
    }
}