#include <bits/stdc++.h>

using namespace std;

int main(){
    int tamanho = 6;
    int lista[tamanho]  = {4,9,2,1,7,8};
    int i = 0;
    while(true){
        if(i+1<tamanho){
            if(lista[i] > lista[i+1]){
                int maior = lista[i];
                int menor = lista[i+1];

                lista[i] = menor;
                lista[i+1] = maior;

                i=0;
            }else{
                i++;
            }
        }else{
            break;
        }
    }
    for(int numero: lista){
        cout<<numero<<" ";
    }
}